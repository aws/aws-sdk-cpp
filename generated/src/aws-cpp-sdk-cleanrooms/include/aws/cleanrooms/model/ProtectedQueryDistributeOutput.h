/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQueryS3Output.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ProtectedQuerySingleMemberOutput.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CleanRooms
{
namespace Model
{

  /**
   * <p> Contains the output information for a protected query with a distribute
   * output configuration.</p> <p> This output type allows query results to be
   * distributed to multiple receivers, including S3 and collaboration members. It is
   * only available for queries using the Spark analytics engine.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryDistributeOutput">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryDistributeOutput
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryDistributeOutput() = default;
    AWS_CLEANROOMS_API ProtectedQueryDistributeOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryDistributeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ProtectedQueryS3Output& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = ProtectedQueryS3Output>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = ProtectedQueryS3Output>
    ProtectedQueryDistributeOutput& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the output results for each member location specified in the
     * distribute output configuration. Each entry provides details about the result
     * distribution to a specific collaboration member. </p>
     */
    inline const Aws::Vector<ProtectedQuerySingleMemberOutput>& GetMemberList() const { return m_memberList; }
    inline bool MemberListHasBeenSet() const { return m_memberListHasBeenSet; }
    template<typename MemberListT = Aws::Vector<ProtectedQuerySingleMemberOutput>>
    void SetMemberList(MemberListT&& value) { m_memberListHasBeenSet = true; m_memberList = std::forward<MemberListT>(value); }
    template<typename MemberListT = Aws::Vector<ProtectedQuerySingleMemberOutput>>
    ProtectedQueryDistributeOutput& WithMemberList(MemberListT&& value) { SetMemberList(std::forward<MemberListT>(value)); return *this;}
    template<typename MemberListT = ProtectedQuerySingleMemberOutput>
    ProtectedQueryDistributeOutput& AddMemberList(MemberListT&& value) { m_memberListHasBeenSet = true; m_memberList.emplace_back(std::forward<MemberListT>(value)); return *this; }
    ///@}
  private:

    ProtectedQueryS3Output m_s3;
    bool m_s3HasBeenSet = false;

    Aws::Vector<ProtectedQuerySingleMemberOutput> m_memberList;
    bool m_memberListHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
