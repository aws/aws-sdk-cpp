/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/SuppressDataIdentifier.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateResourceProfileDetectionsRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateResourceProfileDetectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResourceProfileDetections"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;

    AWS_MACIE2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that the request applies
     * to.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that the request applies
     * to.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that the request applies
     * to.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that the request applies
     * to.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that the request applies
     * to.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that the request applies
     * to.</p>
     */
    inline UpdateResourceProfileDetectionsRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that the request applies
     * to.</p>
     */
    inline UpdateResourceProfileDetectionsRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket that the request applies
     * to.</p>
     */
    inline UpdateResourceProfileDetectionsRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>An array of objects, one for each custom data identifier or managed data
     * identifier that detected the type of sensitive data to start excluding or
     * including in the bucket's score. To start including all sensitive data types in
     * the score, don't specify any values for this array.</p>
     */
    inline const Aws::Vector<SuppressDataIdentifier>& GetSuppressDataIdentifiers() const{ return m_suppressDataIdentifiers; }

    /**
     * <p>An array of objects, one for each custom data identifier or managed data
     * identifier that detected the type of sensitive data to start excluding or
     * including in the bucket's score. To start including all sensitive data types in
     * the score, don't specify any values for this array.</p>
     */
    inline bool SuppressDataIdentifiersHasBeenSet() const { return m_suppressDataIdentifiersHasBeenSet; }

    /**
     * <p>An array of objects, one for each custom data identifier or managed data
     * identifier that detected the type of sensitive data to start excluding or
     * including in the bucket's score. To start including all sensitive data types in
     * the score, don't specify any values for this array.</p>
     */
    inline void SetSuppressDataIdentifiers(const Aws::Vector<SuppressDataIdentifier>& value) { m_suppressDataIdentifiersHasBeenSet = true; m_suppressDataIdentifiers = value; }

    /**
     * <p>An array of objects, one for each custom data identifier or managed data
     * identifier that detected the type of sensitive data to start excluding or
     * including in the bucket's score. To start including all sensitive data types in
     * the score, don't specify any values for this array.</p>
     */
    inline void SetSuppressDataIdentifiers(Aws::Vector<SuppressDataIdentifier>&& value) { m_suppressDataIdentifiersHasBeenSet = true; m_suppressDataIdentifiers = std::move(value); }

    /**
     * <p>An array of objects, one for each custom data identifier or managed data
     * identifier that detected the type of sensitive data to start excluding or
     * including in the bucket's score. To start including all sensitive data types in
     * the score, don't specify any values for this array.</p>
     */
    inline UpdateResourceProfileDetectionsRequest& WithSuppressDataIdentifiers(const Aws::Vector<SuppressDataIdentifier>& value) { SetSuppressDataIdentifiers(value); return *this;}

    /**
     * <p>An array of objects, one for each custom data identifier or managed data
     * identifier that detected the type of sensitive data to start excluding or
     * including in the bucket's score. To start including all sensitive data types in
     * the score, don't specify any values for this array.</p>
     */
    inline UpdateResourceProfileDetectionsRequest& WithSuppressDataIdentifiers(Aws::Vector<SuppressDataIdentifier>&& value) { SetSuppressDataIdentifiers(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each custom data identifier or managed data
     * identifier that detected the type of sensitive data to start excluding or
     * including in the bucket's score. To start including all sensitive data types in
     * the score, don't specify any values for this array.</p>
     */
    inline UpdateResourceProfileDetectionsRequest& AddSuppressDataIdentifiers(const SuppressDataIdentifier& value) { m_suppressDataIdentifiersHasBeenSet = true; m_suppressDataIdentifiers.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each custom data identifier or managed data
     * identifier that detected the type of sensitive data to start excluding or
     * including in the bucket's score. To start including all sensitive data types in
     * the score, don't specify any values for this array.</p>
     */
    inline UpdateResourceProfileDetectionsRequest& AddSuppressDataIdentifiers(SuppressDataIdentifier&& value) { m_suppressDataIdentifiersHasBeenSet = true; m_suppressDataIdentifiers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<SuppressDataIdentifier> m_suppressDataIdentifiers;
    bool m_suppressDataIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
