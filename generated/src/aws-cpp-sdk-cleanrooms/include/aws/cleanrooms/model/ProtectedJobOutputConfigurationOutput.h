/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobS3OutputConfigurationOutput.h>
#include <aws/cleanrooms/model/ProtectedJobMemberOutputConfigurationOutput.h>
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
   * <p> The protected job output configuration output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobOutputConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class ProtectedJobOutputConfigurationOutput
  {
  public:
    AWS_CLEANROOMS_API ProtectedJobOutputConfigurationOutput() = default;
    AWS_CLEANROOMS_API ProtectedJobOutputConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedJobOutputConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If present, the output for a protected job with an `S3` output type.</p>
     */
    inline const ProtectedJobS3OutputConfigurationOutput& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = ProtectedJobS3OutputConfigurationOutput>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = ProtectedJobS3OutputConfigurationOutput>
    ProtectedJobOutputConfigurationOutput& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The member output configuration for a protected job.</p>
     */
    inline const ProtectedJobMemberOutputConfigurationOutput& GetMember() const { return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    template<typename MemberT = ProtectedJobMemberOutputConfigurationOutput>
    void SetMember(MemberT&& value) { m_memberHasBeenSet = true; m_member = std::forward<MemberT>(value); }
    template<typename MemberT = ProtectedJobMemberOutputConfigurationOutput>
    ProtectedJobOutputConfigurationOutput& WithMember(MemberT&& value) { SetMember(std::forward<MemberT>(value)); return *this;}
    ///@}
  private:

    ProtectedJobS3OutputConfigurationOutput m_s3;
    bool m_s3HasBeenSet = false;

    ProtectedJobMemberOutputConfigurationOutput m_member;
    bool m_memberHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
