/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQueryS3OutputConfiguration.h>
#include <aws/cleanrooms/model/ProtectedQueryMemberOutputConfiguration.h>
#include <aws/cleanrooms/model/ProtectedQueryDistributeOutputConfiguration.h>
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
   * <p>Contains configuration details for protected query output.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryOutputConfiguration
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryOutputConfiguration() = default;
    AWS_CLEANROOMS_API ProtectedQueryOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Required configuration for a protected query with an <code>s3</code> output
     * type.</p>
     */
    inline const ProtectedQueryS3OutputConfiguration& GetS3() const { return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    template<typename S3T = ProtectedQueryS3OutputConfiguration>
    void SetS3(S3T&& value) { m_s3HasBeenSet = true; m_s3 = std::forward<S3T>(value); }
    template<typename S3T = ProtectedQueryS3OutputConfiguration>
    ProtectedQueryOutputConfiguration& WithS3(S3T&& value) { SetS3(std::forward<S3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Required configuration for a protected query with a <code>member</code>
     * output type.</p>
     */
    inline const ProtectedQueryMemberOutputConfiguration& GetMember() const { return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    template<typename MemberT = ProtectedQueryMemberOutputConfiguration>
    void SetMember(MemberT&& value) { m_memberHasBeenSet = true; m_member = std::forward<MemberT>(value); }
    template<typename MemberT = ProtectedQueryMemberOutputConfiguration>
    ProtectedQueryOutputConfiguration& WithMember(MemberT&& value) { SetMember(std::forward<MemberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Required configuration for a protected query with a <code>distribute</code>
     * output type.</p>
     */
    inline const ProtectedQueryDistributeOutputConfiguration& GetDistribute() const { return m_distribute; }
    inline bool DistributeHasBeenSet() const { return m_distributeHasBeenSet; }
    template<typename DistributeT = ProtectedQueryDistributeOutputConfiguration>
    void SetDistribute(DistributeT&& value) { m_distributeHasBeenSet = true; m_distribute = std::forward<DistributeT>(value); }
    template<typename DistributeT = ProtectedQueryDistributeOutputConfiguration>
    ProtectedQueryOutputConfiguration& WithDistribute(DistributeT&& value) { SetDistribute(std::forward<DistributeT>(value)); return *this;}
    ///@}
  private:

    ProtectedQueryS3OutputConfiguration m_s3;
    bool m_s3HasBeenSet = false;

    ProtectedQueryMemberOutputConfiguration m_member;
    bool m_memberHasBeenSet = false;

    ProtectedQueryDistributeOutputConfiguration m_distribute;
    bool m_distributeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
