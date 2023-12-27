/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQueryS3OutputConfiguration.h>
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
   * <p>Contains configurations for protected query results.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MembershipProtectedQueryOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class MembershipProtectedQueryOutputConfiguration
  {
  public:
    AWS_CLEANROOMS_API MembershipProtectedQueryOutputConfiguration();
    AWS_CLEANROOMS_API MembershipProtectedQueryOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MembershipProtectedQueryOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ProtectedQueryS3OutputConfiguration& GetS3() const{ return m_s3; }

    
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    
    inline void SetS3(const ProtectedQueryS3OutputConfiguration& value) { m_s3HasBeenSet = true; m_s3 = value; }

    
    inline void SetS3(ProtectedQueryS3OutputConfiguration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    
    inline MembershipProtectedQueryOutputConfiguration& WithS3(const ProtectedQueryS3OutputConfiguration& value) { SetS3(value); return *this;}

    
    inline MembershipProtectedQueryOutputConfiguration& WithS3(ProtectedQueryS3OutputConfiguration&& value) { SetS3(std::move(value)); return *this;}

  private:

    ProtectedQueryS3OutputConfiguration m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
