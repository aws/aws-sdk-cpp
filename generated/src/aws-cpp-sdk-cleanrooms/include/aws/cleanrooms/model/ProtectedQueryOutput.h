/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQueryS3Output.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ProtectedQueryDistributeOutput.h>
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
   * <p>Contains details about the protected query output.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryOutput">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryOutput
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryOutput() = default;
    AWS_CLEANROOMS_API ProtectedQueryOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If present, the output for a protected query with an <code>S3</code> output
     * type.</p>
     */
    inline const ProtectedQueryS3Output& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = ProtectedQueryS3Output>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = ProtectedQueryS3Output>
    ProtectedQueryOutput& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the query. </p>
     */
    inline const Aws::Vector<ProtectedQuerySingleMemberOutput>& GetMemberList() const { return m_memberList; }
    inline bool MemberListHasBeenSet() const { return m_memberListHasBeenSet; }
    template<typename MemberListT = Aws::Vector<ProtectedQuerySingleMemberOutput>>
    void SetMemberList(MemberListT&& value) { m_memberListHasBeenSet = true; m_memberList = std::forward<MemberListT>(value); }
    template<typename MemberListT = Aws::Vector<ProtectedQuerySingleMemberOutput>>
    ProtectedQueryOutput& WithMemberList(MemberListT&& value) { SetMemberList(std::forward<MemberListT>(value)); return *this;}
    template<typename MemberListT = ProtectedQuerySingleMemberOutput>
    ProtectedQueryOutput& AddMemberList(MemberListT&& value) { m_memberListHasBeenSet = true; m_memberList.emplace_back(std::forward<MemberListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains output information for protected queries that use a
     * <code>distribute</code> output type. This output type lets you send query
     * results to multiple locations - either to S3 or to collaboration members. </p>
     *  <p> You can only use the <code>distribute</code> output type with the
     * Spark analytics engine. </p> 
     */
    inline const ProtectedQueryDistributeOutput& GetDistribute() const { return m_distribute; }
    inline bool DistributeHasBeenSet() const { return m_distributeHasBeenSet; }
    template<typename DistributeT = ProtectedQueryDistributeOutput>
    void SetDistribute(DistributeT&& value) { m_distributeHasBeenSet = true; m_distribute = std::forward<DistributeT>(value); }
    template<typename DistributeT = ProtectedQueryDistributeOutput>
    ProtectedQueryOutput& WithDistribute(DistributeT&& value) { SetDistribute(std::forward<DistributeT>(value)); return *this;}
    ///@}
  private:

    ProtectedQueryS3Output m_s3;
    bool m_s3HasBeenSet = false;

    Aws::Vector<ProtectedQuerySingleMemberOutput> m_memberList;
    bool m_memberListHasBeenSet = false;

    ProtectedQueryDistributeOutput m_distribute;
    bool m_distributeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
