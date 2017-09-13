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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ImportInstanceTaskDetails.h>
#include <aws/ec2/model/ImportVolumeTaskDetails.h>
#include <aws/ec2/model/ConversionTaskState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a conversion task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConversionTask">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ConversionTask
  {
  public:
    ConversionTask();
    ConversionTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    ConversionTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the conversion task.</p>
     */
    inline const Aws::String& GetConversionTaskId() const{ return m_conversionTaskId; }

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline void SetConversionTaskId(const Aws::String& value) { m_conversionTaskIdHasBeenSet = true; m_conversionTaskId = value; }

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline void SetConversionTaskId(Aws::String&& value) { m_conversionTaskIdHasBeenSet = true; m_conversionTaskId = std::move(value); }

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline void SetConversionTaskId(const char* value) { m_conversionTaskIdHasBeenSet = true; m_conversionTaskId.assign(value); }

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline ConversionTask& WithConversionTaskId(const Aws::String& value) { SetConversionTaskId(value); return *this;}

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline ConversionTask& WithConversionTaskId(Aws::String&& value) { SetConversionTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the conversion task.</p>
     */
    inline ConversionTask& WithConversionTaskId(const char* value) { SetConversionTaskId(value); return *this;}


    /**
     * <p>The time when the task expires. If the upload isn't complete before the
     * expiration time, we automatically cancel the task.</p>
     */
    inline const Aws::String& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>The time when the task expires. If the upload isn't complete before the
     * expiration time, we automatically cancel the task.</p>
     */
    inline void SetExpirationTime(const Aws::String& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>The time when the task expires. If the upload isn't complete before the
     * expiration time, we automatically cancel the task.</p>
     */
    inline void SetExpirationTime(Aws::String&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>The time when the task expires. If the upload isn't complete before the
     * expiration time, we automatically cancel the task.</p>
     */
    inline void SetExpirationTime(const char* value) { m_expirationTimeHasBeenSet = true; m_expirationTime.assign(value); }

    /**
     * <p>The time when the task expires. If the upload isn't complete before the
     * expiration time, we automatically cancel the task.</p>
     */
    inline ConversionTask& WithExpirationTime(const Aws::String& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>The time when the task expires. If the upload isn't complete before the
     * expiration time, we automatically cancel the task.</p>
     */
    inline ConversionTask& WithExpirationTime(Aws::String&& value) { SetExpirationTime(std::move(value)); return *this;}

    /**
     * <p>The time when the task expires. If the upload isn't complete before the
     * expiration time, we automatically cancel the task.</p>
     */
    inline ConversionTask& WithExpirationTime(const char* value) { SetExpirationTime(value); return *this;}


    /**
     * <p>If the task is for importing an instance, this contains information about the
     * import instance task.</p>
     */
    inline const ImportInstanceTaskDetails& GetImportInstance() const{ return m_importInstance; }

    /**
     * <p>If the task is for importing an instance, this contains information about the
     * import instance task.</p>
     */
    inline void SetImportInstance(const ImportInstanceTaskDetails& value) { m_importInstanceHasBeenSet = true; m_importInstance = value; }

    /**
     * <p>If the task is for importing an instance, this contains information about the
     * import instance task.</p>
     */
    inline void SetImportInstance(ImportInstanceTaskDetails&& value) { m_importInstanceHasBeenSet = true; m_importInstance = std::move(value); }

    /**
     * <p>If the task is for importing an instance, this contains information about the
     * import instance task.</p>
     */
    inline ConversionTask& WithImportInstance(const ImportInstanceTaskDetails& value) { SetImportInstance(value); return *this;}

    /**
     * <p>If the task is for importing an instance, this contains information about the
     * import instance task.</p>
     */
    inline ConversionTask& WithImportInstance(ImportInstanceTaskDetails&& value) { SetImportInstance(std::move(value)); return *this;}


    /**
     * <p>If the task is for importing a volume, this contains information about the
     * import volume task.</p>
     */
    inline const ImportVolumeTaskDetails& GetImportVolume() const{ return m_importVolume; }

    /**
     * <p>If the task is for importing a volume, this contains information about the
     * import volume task.</p>
     */
    inline void SetImportVolume(const ImportVolumeTaskDetails& value) { m_importVolumeHasBeenSet = true; m_importVolume = value; }

    /**
     * <p>If the task is for importing a volume, this contains information about the
     * import volume task.</p>
     */
    inline void SetImportVolume(ImportVolumeTaskDetails&& value) { m_importVolumeHasBeenSet = true; m_importVolume = std::move(value); }

    /**
     * <p>If the task is for importing a volume, this contains information about the
     * import volume task.</p>
     */
    inline ConversionTask& WithImportVolume(const ImportVolumeTaskDetails& value) { SetImportVolume(value); return *this;}

    /**
     * <p>If the task is for importing a volume, this contains information about the
     * import volume task.</p>
     */
    inline ConversionTask& WithImportVolume(ImportVolumeTaskDetails&& value) { SetImportVolume(std::move(value)); return *this;}


    /**
     * <p>The state of the conversion task.</p>
     */
    inline const ConversionTaskState& GetState() const{ return m_state; }

    /**
     * <p>The state of the conversion task.</p>
     */
    inline void SetState(const ConversionTaskState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the conversion task.</p>
     */
    inline void SetState(ConversionTaskState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the conversion task.</p>
     */
    inline ConversionTask& WithState(const ConversionTaskState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the conversion task.</p>
     */
    inline ConversionTask& WithState(ConversionTaskState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The status message related to the conversion task.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message related to the conversion task.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message related to the conversion task.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message related to the conversion task.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message related to the conversion task.</p>
     */
    inline ConversionTask& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message related to the conversion task.</p>
     */
    inline ConversionTask& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message related to the conversion task.</p>
     */
    inline ConversionTask& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Any tags assigned to the task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the task.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the task.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the task.</p>
     */
    inline ConversionTask& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the task.</p>
     */
    inline ConversionTask& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the task.</p>
     */
    inline ConversionTask& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the task.</p>
     */
    inline ConversionTask& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_conversionTaskId;
    bool m_conversionTaskIdHasBeenSet;

    Aws::String m_expirationTime;
    bool m_expirationTimeHasBeenSet;

    ImportInstanceTaskDetails m_importInstance;
    bool m_importInstanceHasBeenSet;

    ImportVolumeTaskDetails m_importVolume;
    bool m_importVolumeHasBeenSet;

    ConversionTaskState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
