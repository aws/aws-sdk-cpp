/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that is an entry in an <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CidrCollection.html">CidrCollection</a>
   * array.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CollectionSummary">AWS
   * API Reference</a></p>
   */
  class CollectionSummary
  {
  public:
    AWS_ROUTE53_API CollectionSummary();
    AWS_ROUTE53_API CollectionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API CollectionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ARN of the collection summary. Can be used to reference the collection in
     * IAM policy or cross-account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the collection summary. Can be used to reference the collection in
     * IAM policy or cross-account.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the collection summary. Can be used to reference the collection in
     * IAM policy or cross-account.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the collection summary. Can be used to reference the collection in
     * IAM policy or cross-account.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the collection summary. Can be used to reference the collection in
     * IAM policy or cross-account.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the collection summary. Can be used to reference the collection in
     * IAM policy or cross-account.</p>
     */
    inline CollectionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the collection summary. Can be used to reference the collection in
     * IAM policy or cross-account.</p>
     */
    inline CollectionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the collection summary. Can be used to reference the collection in
     * IAM policy or cross-account.</p>
     */
    inline CollectionSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Unique ID for the CIDR collection.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Unique ID for the CIDR collection.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Unique ID for the CIDR collection.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Unique ID for the CIDR collection.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Unique ID for the CIDR collection.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Unique ID for the CIDR collection.</p>
     */
    inline CollectionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Unique ID for the CIDR collection.</p>
     */
    inline CollectionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Unique ID for the CIDR collection.</p>
     */
    inline CollectionSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of a CIDR collection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a CIDR collection.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a CIDR collection.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a CIDR collection.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a CIDR collection.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a CIDR collection.</p>
     */
    inline CollectionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a CIDR collection.</p>
     */
    inline CollectionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a CIDR collection.</p>
     */
    inline CollectionSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A sequential counter that Route 53 sets to 1 when you create a CIDR
     * collection and increments by 1 each time you update settings for the CIDR
     * collection.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>A sequential counter that Route 53 sets to 1 when you create a CIDR
     * collection and increments by 1 each time you update settings for the CIDR
     * collection.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>A sequential counter that Route 53 sets to 1 when you create a CIDR
     * collection and increments by 1 each time you update settings for the CIDR
     * collection.</p>
     */
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>A sequential counter that Route 53 sets to 1 when you create a CIDR
     * collection and increments by 1 each time you update settings for the CIDR
     * collection.</p>
     */
    inline CollectionSummary& WithVersion(long long value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
