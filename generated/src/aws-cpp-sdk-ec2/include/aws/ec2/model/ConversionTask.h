/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ConversionTask
  {
  public:
    AWS_EC2_API ConversionTask() = default;
    AWS_EC2_API ConversionTask(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ConversionTask& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the conversion task.</p>
     */
    inline const Aws::String& GetConversionTaskId() const { return m_conversionTaskId; }
    inline bool ConversionTaskIdHasBeenSet() const { return m_conversionTaskIdHasBeenSet; }
    template<typename ConversionTaskIdT = Aws::String>
    void SetConversionTaskId(ConversionTaskIdT&& value) { m_conversionTaskIdHasBeenSet = true; m_conversionTaskId = std::forward<ConversionTaskIdT>(value); }
    template<typename ConversionTaskIdT = Aws::String>
    ConversionTask& WithConversionTaskId(ConversionTaskIdT&& value) { SetConversionTaskId(std::forward<ConversionTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the task expires. If the upload isn't complete before the
     * expiration time, we automatically cancel the task.</p>
     */
    inline const Aws::String& GetExpirationTime() const { return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    template<typename ExpirationTimeT = Aws::String>
    void SetExpirationTime(ExpirationTimeT&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::forward<ExpirationTimeT>(value); }
    template<typename ExpirationTimeT = Aws::String>
    ConversionTask& WithExpirationTime(ExpirationTimeT&& value) { SetExpirationTime(std::forward<ExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the task is for importing an instance, this contains information about the
     * import instance task.</p>
     */
    inline const ImportInstanceTaskDetails& GetImportInstance() const { return m_importInstance; }
    inline bool ImportInstanceHasBeenSet() const { return m_importInstanceHasBeenSet; }
    template<typename ImportInstanceT = ImportInstanceTaskDetails>
    void SetImportInstance(ImportInstanceT&& value) { m_importInstanceHasBeenSet = true; m_importInstance = std::forward<ImportInstanceT>(value); }
    template<typename ImportInstanceT = ImportInstanceTaskDetails>
    ConversionTask& WithImportInstance(ImportInstanceT&& value) { SetImportInstance(std::forward<ImportInstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the task is for importing a volume, this contains information about the
     * import volume task.</p>
     */
    inline const ImportVolumeTaskDetails& GetImportVolume() const { return m_importVolume; }
    inline bool ImportVolumeHasBeenSet() const { return m_importVolumeHasBeenSet; }
    template<typename ImportVolumeT = ImportVolumeTaskDetails>
    void SetImportVolume(ImportVolumeT&& value) { m_importVolumeHasBeenSet = true; m_importVolume = std::forward<ImportVolumeT>(value); }
    template<typename ImportVolumeT = ImportVolumeTaskDetails>
    ConversionTask& WithImportVolume(ImportVolumeT&& value) { SetImportVolume(std::forward<ImportVolumeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the conversion task.</p>
     */
    inline ConversionTaskState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ConversionTaskState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ConversionTask& WithState(ConversionTaskState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message related to the conversion task.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ConversionTask& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the task.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ConversionTask& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ConversionTask& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_conversionTaskId;
    bool m_conversionTaskIdHasBeenSet = false;

    Aws::String m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    ImportInstanceTaskDetails m_importInstance;
    bool m_importInstanceHasBeenSet = false;

    ImportVolumeTaskDetails m_importVolume;
    bool m_importVolumeHasBeenSet = false;

    ConversionTaskState m_state{ConversionTaskState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
