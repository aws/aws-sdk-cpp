/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQueryS3OutputConfiguration.h>
#include <aws/cleanrooms/model/ProtectedQueryMemberOutputConfiguration.h>
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
   * <p> Specifies where you'll distribute the results of your protected query. You
   * must configure either an S3 destination or a collaboration member
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryDistributeOutputConfigurationLocation">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryDistributeOutputConfigurationLocation
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryDistributeOutputConfigurationLocation() = default;
    AWS_CLEANROOMS_API ProtectedQueryDistributeOutputConfigurationLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryDistributeOutputConfigurationLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ProtectedQueryS3OutputConfiguration& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = ProtectedQueryS3OutputConfiguration>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = ProtectedQueryS3OutputConfiguration>
    ProtectedQueryDistributeOutputConfigurationLocation& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProtectedQueryMemberOutputConfiguration& GetMember() const { return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    template<typename MemberT = ProtectedQueryMemberOutputConfiguration>
    void SetMember(MemberT&& value) { m_memberHasBeenSet = true; m_member = std::forward<MemberT>(value); }
    template<typename MemberT = ProtectedQueryMemberOutputConfiguration>
    ProtectedQueryDistributeOutputConfigurationLocation& WithMember(MemberT&& value) { SetMember(std::forward<MemberT>(value)); return *this;}
    ///@}
  private:

    ProtectedQueryS3OutputConfiguration m_s3;
    bool m_s3HasBeenSet = false;

    ProtectedQueryMemberOutputConfiguration m_member;
    bool m_memberHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
