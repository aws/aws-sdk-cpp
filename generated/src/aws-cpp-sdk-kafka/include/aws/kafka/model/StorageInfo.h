/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/EBSStorageInfo.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Contains information about storage volumes attached to MSK
   * broker nodes.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/StorageInfo">AWS
   * API Reference</a></p>
   */
  class StorageInfo
  {
  public:
    AWS_KAFKA_API StorageInfo();
    AWS_KAFKA_API StorageInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API StorageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>EBS volume information.</p>
         
     */
    inline const EBSStorageInfo& GetEbsStorageInfo() const{ return m_ebsStorageInfo; }

    /**
     * 
            <p>EBS volume information.</p>
         
     */
    inline bool EbsStorageInfoHasBeenSet() const { return m_ebsStorageInfoHasBeenSet; }

    /**
     * 
            <p>EBS volume information.</p>
         
     */
    inline void SetEbsStorageInfo(const EBSStorageInfo& value) { m_ebsStorageInfoHasBeenSet = true; m_ebsStorageInfo = value; }

    /**
     * 
            <p>EBS volume information.</p>
         
     */
    inline void SetEbsStorageInfo(EBSStorageInfo&& value) { m_ebsStorageInfoHasBeenSet = true; m_ebsStorageInfo = std::move(value); }

    /**
     * 
            <p>EBS volume information.</p>
         
     */
    inline StorageInfo& WithEbsStorageInfo(const EBSStorageInfo& value) { SetEbsStorageInfo(value); return *this;}

    /**
     * 
            <p>EBS volume information.</p>
         
     */
    inline StorageInfo& WithEbsStorageInfo(EBSStorageInfo&& value) { SetEbsStorageInfo(std::move(value)); return *this;}

  private:

    EBSStorageInfo m_ebsStorageInfo;
    bool m_ebsStorageInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
