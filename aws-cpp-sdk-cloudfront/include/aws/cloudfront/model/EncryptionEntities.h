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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/EncryptionEntity.h>
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
   * <p>Complex data type for field-level encryption profiles that includes all of
   * the encryption entities. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/EncryptionEntities">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API EncryptionEntities
  {
  public:
    EncryptionEntities();
    EncryptionEntities(const Aws::Utils::Xml::XmlNode& xmlNode);
    EncryptionEntities& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Number of field pattern items in a field-level encryption content
     * type-profile mapping. </p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>Number of field pattern items in a field-level encryption content
     * type-profile mapping. </p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>Number of field pattern items in a field-level encryption content
     * type-profile mapping. </p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>Number of field pattern items in a field-level encryption content
     * type-profile mapping. </p>
     */
    inline EncryptionEntities& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>An array of field patterns in a field-level encryption content type-profile
     * mapping. </p>
     */
    inline const Aws::Vector<EncryptionEntity>& GetItems() const{ return m_items; }

    /**
     * <p>An array of field patterns in a field-level encryption content type-profile
     * mapping. </p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>An array of field patterns in a field-level encryption content type-profile
     * mapping. </p>
     */
    inline void SetItems(const Aws::Vector<EncryptionEntity>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>An array of field patterns in a field-level encryption content type-profile
     * mapping. </p>
     */
    inline void SetItems(Aws::Vector<EncryptionEntity>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>An array of field patterns in a field-level encryption content type-profile
     * mapping. </p>
     */
    inline EncryptionEntities& WithItems(const Aws::Vector<EncryptionEntity>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of field patterns in a field-level encryption content type-profile
     * mapping. </p>
     */
    inline EncryptionEntities& WithItems(Aws::Vector<EncryptionEntity>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>An array of field patterns in a field-level encryption content type-profile
     * mapping. </p>
     */
    inline EncryptionEntities& AddItems(const EncryptionEntity& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>An array of field patterns in a field-level encryption content type-profile
     * mapping. </p>
     */
    inline EncryptionEntities& AddItems(EncryptionEntity&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<EncryptionEntity> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
