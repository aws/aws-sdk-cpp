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
   * <p>Contains configuration details for protected query output.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryOutputConfiguration
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryOutputConfiguration();
    AWS_CLEANROOMS_API ProtectedQueryOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Required configuration for a protected query with an <code>s3</code> output
     * type.</p>
     */
    inline const ProtectedQueryS3OutputConfiguration& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const ProtectedQueryS3OutputConfiguration& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(ProtectedQueryS3OutputConfiguration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline ProtectedQueryOutputConfiguration& WithS3(const ProtectedQueryS3OutputConfiguration& value) { SetS3(value); return *this;}
    inline ProtectedQueryOutputConfiguration& WithS3(ProtectedQueryS3OutputConfiguration&& value) { SetS3(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Required configuration for a protected query with a <code>member</code>
     * output type.</p>
     */
    inline const ProtectedQueryMemberOutputConfiguration& GetMember() const{ return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    inline void SetMember(const ProtectedQueryMemberOutputConfiguration& value) { m_memberHasBeenSet = true; m_member = value; }
    inline void SetMember(ProtectedQueryMemberOutputConfiguration&& value) { m_memberHasBeenSet = true; m_member = std::move(value); }
    inline ProtectedQueryOutputConfiguration& WithMember(const ProtectedQueryMemberOutputConfiguration& value) { SetMember(value); return *this;}
    inline ProtectedQueryOutputConfiguration& WithMember(ProtectedQueryMemberOutputConfiguration&& value) { SetMember(std::move(value)); return *this;}
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
