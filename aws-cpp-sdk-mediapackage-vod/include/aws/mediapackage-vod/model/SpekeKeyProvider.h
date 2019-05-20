/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A configuration for accessing an external Secure Packager and Encoder Key
   * Exchange (SPEKE) service that will provide encryption keys.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/SpekeKeyProvider">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API SpekeKeyProvider
  {
  public:
    SpekeKeyProvider();
    SpekeKeyProvider(Aws::Utils::Json::JsonView jsonValue);
    SpekeKeyProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * An Amazon Resource Name (ARN) of an IAM role that AWS Elemental
MediaPackage
     * will assume when accessing the key provider service.

     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * An Amazon Resource Name (ARN) of an IAM role that AWS Elemental
MediaPackage
     * will assume when accessing the key provider service.

     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * An Amazon Resource Name (ARN) of an IAM role that AWS Elemental
MediaPackage
     * will assume when accessing the key provider service.

     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * An Amazon Resource Name (ARN) of an IAM role that AWS Elemental
MediaPackage
     * will assume when accessing the key provider service.

     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * An Amazon Resource Name (ARN) of an IAM role that AWS Elemental
MediaPackage
     * will assume when accessing the key provider service.

     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * An Amazon Resource Name (ARN) of an IAM role that AWS Elemental
MediaPackage
     * will assume when accessing the key provider service.

     */
    inline SpekeKeyProvider& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * An Amazon Resource Name (ARN) of an IAM role that AWS Elemental
MediaPackage
     * will assume when accessing the key provider service.

     */
    inline SpekeKeyProvider& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * An Amazon Resource Name (ARN) of an IAM role that AWS Elemental
MediaPackage
     * will assume when accessing the key provider service.

     */
    inline SpekeKeyProvider& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * The system IDs to include in key requests.
     */
    inline const Aws::Vector<Aws::String>& GetSystemIds() const{ return m_systemIds; }

    /**
     * The system IDs to include in key requests.
     */
    inline bool SystemIdsHasBeenSet() const { return m_systemIdsHasBeenSet; }

    /**
     * The system IDs to include in key requests.
     */
    inline void SetSystemIds(const Aws::Vector<Aws::String>& value) { m_systemIdsHasBeenSet = true; m_systemIds = value; }

    /**
     * The system IDs to include in key requests.
     */
    inline void SetSystemIds(Aws::Vector<Aws::String>&& value) { m_systemIdsHasBeenSet = true; m_systemIds = std::move(value); }

    /**
     * The system IDs to include in key requests.
     */
    inline SpekeKeyProvider& WithSystemIds(const Aws::Vector<Aws::String>& value) { SetSystemIds(value); return *this;}

    /**
     * The system IDs to include in key requests.
     */
    inline SpekeKeyProvider& WithSystemIds(Aws::Vector<Aws::String>&& value) { SetSystemIds(std::move(value)); return *this;}

    /**
     * The system IDs to include in key requests.
     */
    inline SpekeKeyProvider& AddSystemIds(const Aws::String& value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(value); return *this; }

    /**
     * The system IDs to include in key requests.
     */
    inline SpekeKeyProvider& AddSystemIds(Aws::String&& value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(std::move(value)); return *this; }

    /**
     * The system IDs to include in key requests.
     */
    inline SpekeKeyProvider& AddSystemIds(const char* value) { m_systemIdsHasBeenSet = true; m_systemIds.push_back(value); return *this; }


    /**
     * The URL of the external key provider service.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * The URL of the external key provider service.
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * The URL of the external key provider service.
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * The URL of the external key provider service.
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * The URL of the external key provider service.
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * The URL of the external key provider service.
     */
    inline SpekeKeyProvider& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The URL of the external key provider service.
     */
    inline SpekeKeyProvider& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The URL of the external key provider service.
     */
    inline SpekeKeyProvider& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Aws::String> m_systemIds;
    bool m_systemIdsHasBeenSet;

    Aws::String m_url;
    bool m_urlHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
