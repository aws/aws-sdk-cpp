﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/InventoryConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{
  class AWS_S3CRT_API GetBucketInventoryConfigurationResult
  {
  public:
    GetBucketInventoryConfigurationResult();
    GetBucketInventoryConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetBucketInventoryConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Specifies the inventory configuration.</p>
     */
    inline const InventoryConfiguration& GetInventoryConfiguration() const{ return m_inventoryConfiguration; }

    /**
     * <p>Specifies the inventory configuration.</p>
     */
    inline void SetInventoryConfiguration(const InventoryConfiguration& value) { m_inventoryConfiguration = value; }

    /**
     * <p>Specifies the inventory configuration.</p>
     */
    inline void SetInventoryConfiguration(InventoryConfiguration&& value) { m_inventoryConfiguration = std::move(value); }

    /**
     * <p>Specifies the inventory configuration.</p>
     */
    inline GetBucketInventoryConfigurationResult& WithInventoryConfiguration(const InventoryConfiguration& value) { SetInventoryConfiguration(value); return *this;}

    /**
     * <p>Specifies the inventory configuration.</p>
     */
    inline GetBucketInventoryConfigurationResult& WithInventoryConfiguration(InventoryConfiguration&& value) { SetInventoryConfiguration(std::move(value)); return *this;}

  private:

    InventoryConfiguration m_inventoryConfiguration;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
