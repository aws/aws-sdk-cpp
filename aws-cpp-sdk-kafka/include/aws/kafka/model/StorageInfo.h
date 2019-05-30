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
  class AWS_KAFKA_API StorageInfo
  {
  public:
    StorageInfo();
    StorageInfo(Aws::Utils::Json::JsonView jsonValue);
    StorageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_ebsStorageInfoHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
