/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobS3Output.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ProtectedJobSingleMemberOutput.h>
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
   * <p>Contains details about the protected job output.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobOutput">AWS
   * API Reference</a></p>
   */
  class ProtectedJobOutput
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobOutput() = default;
    AWS_CLEANROOMS_API ProtectedJobOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If present, the output for a protected job with an `S3` output type.</p>
     */
    inline const ProtectedJobS3Output& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = ProtectedJobS3Output>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = ProtectedJobS3Output>
    ProtectedJobOutput& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of member Amazon Web Services account(s) that received the results
     * of the job. </p>
     */
    inline const Aws::Vector<ProtectedJobSingleMemberOutput>& GetMemberList() const { return m_memberList; }
    inline bool MemberListHasBeenSet() const { return m_memberListHasBeenSet; }
    template<typename MemberListT = Aws::Vector<ProtectedJobSingleMemberOutput>>
    void SetMemberList(MemberListT&& value) { m_memberListHasBeenSet = true; m_memberList = std::forward<MemberListT>(value); }
    template<typename MemberListT = Aws::Vector<ProtectedJobSingleMemberOutput>>
    ProtectedJobOutput& WithMemberList(MemberListT&& value) { SetMemberList(std::forward<MemberListT>(value)); return *this;}
    template<typename MemberListT = ProtectedJobSingleMemberOutput>
    ProtectedJobOutput& AddMemberList(MemberListT&& value) { m_memberListHasBeenSet = true; m_memberList.emplace_back(std::forward<MemberListT>(value)); return *this; }
    ///@}
  private:

    ProtectedJobS3Output m_s3;
    bool m_s3HasBeenSet = false;

    Aws::Vector<ProtectedJobSingleMemberOutput> m_memberList;
    bool m_memberListHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
