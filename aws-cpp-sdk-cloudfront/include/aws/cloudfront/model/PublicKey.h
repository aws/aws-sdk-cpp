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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/PublicKeyConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A complex data type of public keys you add to CloudFront to use with features
   * like field-level encryption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/PublicKey">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API PublicKey
  {
  public:
    PublicKey();
    PublicKey(const Aws::Utils::Xml::XmlNode& xmlNode);
    PublicKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A unique ID assigned to a public key you've added to CloudFront.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique ID assigned to a public key you've added to CloudFront.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique ID assigned to a public key you've added to CloudFront.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique ID assigned to a public key you've added to CloudFront.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique ID assigned to a public key you've added to CloudFront.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique ID assigned to a public key you've added to CloudFront.</p>
     */
    inline PublicKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique ID assigned to a public key you've added to CloudFront.</p>
     */
    inline PublicKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique ID assigned to a public key you've added to CloudFront.</p>
     */
    inline PublicKey& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A time you added a public key to CloudFront.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>A time you added a public key to CloudFront.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>A time you added a public key to CloudFront.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>A time you added a public key to CloudFront.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>A time you added a public key to CloudFront.</p>
     */
    inline PublicKey& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A time you added a public key to CloudFront.</p>
     */
    inline PublicKey& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>A complex data type for a public key you add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline const PublicKeyConfig& GetPublicKeyConfig() const{ return m_publicKeyConfig; }

    /**
     * <p>A complex data type for a public key you add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline bool PublicKeyConfigHasBeenSet() const { return m_publicKeyConfigHasBeenSet; }

    /**
     * <p>A complex data type for a public key you add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline void SetPublicKeyConfig(const PublicKeyConfig& value) { m_publicKeyConfigHasBeenSet = true; m_publicKeyConfig = value; }

    /**
     * <p>A complex data type for a public key you add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline void SetPublicKeyConfig(PublicKeyConfig&& value) { m_publicKeyConfigHasBeenSet = true; m_publicKeyConfig = std::move(value); }

    /**
     * <p>A complex data type for a public key you add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline PublicKey& WithPublicKeyConfig(const PublicKeyConfig& value) { SetPublicKeyConfig(value); return *this;}

    /**
     * <p>A complex data type for a public key you add to CloudFront to use with
     * features like field-level encryption.</p>
     */
    inline PublicKey& WithPublicKeyConfig(PublicKeyConfig&& value) { SetPublicKeyConfig(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    PublicKeyConfig m_publicKeyConfig;
    bool m_publicKeyConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
