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
            <p>Contains information about the EBS storage volumes attached to
   * Kafka broker nodes.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/EBSStorageInfo">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API EBSStorageInfo
  {
  public:
    EBSStorageInfo();
    EBSStorageInfo(Aws::Utils::Json::JsonView jsonValue);
    EBSStorageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The size in GiB of the EBS volume for the data drive on each
     * broker node.</p>
         
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * 
            <p>The size in GiB of the EBS volume for the data drive on each
     * broker node.</p>
         
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * 
            <p>The size in GiB of the EBS volume for the data drive on each
     * broker node.</p>
         
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * 
            <p>The size in GiB of the EBS volume for the data drive on each
     * broker node.</p>
         
     */
    inline EBSStorageInfo& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}

  private:

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
