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
#include <aws/snowball/Snowball_EXPORTS.h>

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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Defines the real-time status of a Snowball's data transfer while the device
   * is at AWS. This data is only available while a job has a <code>JobState</code>
   * value of <code>InProgress</code>, for both import and export jobs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DataTransfer">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API DataTransfer
  {
  public:
    DataTransfer();
    DataTransfer(Aws::Utils::Json::JsonView jsonValue);
    DataTransfer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of bytes transferred between a Snowball and Amazon S3.</p>
     */
    inline long long GetBytesTransferred() const{ return m_bytesTransferred; }

    /**
     * <p>The number of bytes transferred between a Snowball and Amazon S3.</p>
     */
    inline bool BytesTransferredHasBeenSet() const { return m_bytesTransferredHasBeenSet; }

    /**
     * <p>The number of bytes transferred between a Snowball and Amazon S3.</p>
     */
    inline void SetBytesTransferred(long long value) { m_bytesTransferredHasBeenSet = true; m_bytesTransferred = value; }

    /**
     * <p>The number of bytes transferred between a Snowball and Amazon S3.</p>
     */
    inline DataTransfer& WithBytesTransferred(long long value) { SetBytesTransferred(value); return *this;}


    /**
     * <p>The number of objects transferred between a Snowball and Amazon S3.</p>
     */
    inline long long GetObjectsTransferred() const{ return m_objectsTransferred; }

    /**
     * <p>The number of objects transferred between a Snowball and Amazon S3.</p>
     */
    inline bool ObjectsTransferredHasBeenSet() const { return m_objectsTransferredHasBeenSet; }

    /**
     * <p>The number of objects transferred between a Snowball and Amazon S3.</p>
     */
    inline void SetObjectsTransferred(long long value) { m_objectsTransferredHasBeenSet = true; m_objectsTransferred = value; }

    /**
     * <p>The number of objects transferred between a Snowball and Amazon S3.</p>
     */
    inline DataTransfer& WithObjectsTransferred(long long value) { SetObjectsTransferred(value); return *this;}


    /**
     * <p>The total bytes of data for a transfer between a Snowball and Amazon S3. This
     * value is set to 0 (zero) until all the keys that will be transferred have been
     * listed.</p>
     */
    inline long long GetTotalBytes() const{ return m_totalBytes; }

    /**
     * <p>The total bytes of data for a transfer between a Snowball and Amazon S3. This
     * value is set to 0 (zero) until all the keys that will be transferred have been
     * listed.</p>
     */
    inline bool TotalBytesHasBeenSet() const { return m_totalBytesHasBeenSet; }

    /**
     * <p>The total bytes of data for a transfer between a Snowball and Amazon S3. This
     * value is set to 0 (zero) until all the keys that will be transferred have been
     * listed.</p>
     */
    inline void SetTotalBytes(long long value) { m_totalBytesHasBeenSet = true; m_totalBytes = value; }

    /**
     * <p>The total bytes of data for a transfer between a Snowball and Amazon S3. This
     * value is set to 0 (zero) until all the keys that will be transferred have been
     * listed.</p>
     */
    inline DataTransfer& WithTotalBytes(long long value) { SetTotalBytes(value); return *this;}


    /**
     * <p>The total number of objects for a transfer between a Snowball and Amazon S3.
     * This value is set to 0 (zero) until all the keys that will be transferred have
     * been listed.</p>
     */
    inline long long GetTotalObjects() const{ return m_totalObjects; }

    /**
     * <p>The total number of objects for a transfer between a Snowball and Amazon S3.
     * This value is set to 0 (zero) until all the keys that will be transferred have
     * been listed.</p>
     */
    inline bool TotalObjectsHasBeenSet() const { return m_totalObjectsHasBeenSet; }

    /**
     * <p>The total number of objects for a transfer between a Snowball and Amazon S3.
     * This value is set to 0 (zero) until all the keys that will be transferred have
     * been listed.</p>
     */
    inline void SetTotalObjects(long long value) { m_totalObjectsHasBeenSet = true; m_totalObjects = value; }

    /**
     * <p>The total number of objects for a transfer between a Snowball and Amazon S3.
     * This value is set to 0 (zero) until all the keys that will be transferred have
     * been listed.</p>
     */
    inline DataTransfer& WithTotalObjects(long long value) { SetTotalObjects(value); return *this;}

  private:

    long long m_bytesTransferred;
    bool m_bytesTransferredHasBeenSet;

    long long m_objectsTransferred;
    bool m_objectsTransferredHasBeenSet;

    long long m_totalBytes;
    bool m_totalBytesHasBeenSet;

    long long m_totalObjects;
    bool m_totalObjectsHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
