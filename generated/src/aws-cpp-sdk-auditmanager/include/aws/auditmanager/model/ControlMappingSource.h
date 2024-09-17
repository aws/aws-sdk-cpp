/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/SourceSetUpOption.h>
#include <aws/auditmanager/model/SourceType.h>
#include <aws/auditmanager/model/SourceKeyword.h>
#include <aws/auditmanager/model/SourceFrequency.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> The data source that determines where Audit Manager collects evidence from
   * for the control. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ControlMappingSource">AWS
   * API Reference</a></p>
   */
  class ControlMappingSource
  {
  public:
    AWS_AUDITMANAGER_API ControlMappingSource();
    AWS_AUDITMANAGER_API ControlMappingSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ControlMappingSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the source. </p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }
    inline ControlMappingSource& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline ControlMappingSource& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline ControlMappingSource& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the source. </p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }
    inline ControlMappingSource& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}
    inline ControlMappingSource& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}
    inline ControlMappingSource& WithSourceName(const char* value) { SetSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the source. </p>
     */
    inline const Aws::String& GetSourceDescription() const{ return m_sourceDescription; }
    inline bool SourceDescriptionHasBeenSet() const { return m_sourceDescriptionHasBeenSet; }
    inline void SetSourceDescription(const Aws::String& value) { m_sourceDescriptionHasBeenSet = true; m_sourceDescription = value; }
    inline void SetSourceDescription(Aws::String&& value) { m_sourceDescriptionHasBeenSet = true; m_sourceDescription = std::move(value); }
    inline void SetSourceDescription(const char* value) { m_sourceDescriptionHasBeenSet = true; m_sourceDescription.assign(value); }
    inline ControlMappingSource& WithSourceDescription(const Aws::String& value) { SetSourceDescription(value); return *this;}
    inline ControlMappingSource& WithSourceDescription(Aws::String&& value) { SetSourceDescription(std::move(value)); return *this;}
    inline ControlMappingSource& WithSourceDescription(const char* value) { SetSourceDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setup option for the data source. This option reflects if the evidence
     * collection method is automated or manual. If you don’t provide a value for
     * <code>sourceSetUpOption</code>, Audit Manager automatically infers and populates
     * the correct value based on the <code>sourceType</code> that you specify.</p>
     */
    inline const SourceSetUpOption& GetSourceSetUpOption() const{ return m_sourceSetUpOption; }
    inline bool SourceSetUpOptionHasBeenSet() const { return m_sourceSetUpOptionHasBeenSet; }
    inline void SetSourceSetUpOption(const SourceSetUpOption& value) { m_sourceSetUpOptionHasBeenSet = true; m_sourceSetUpOption = value; }
    inline void SetSourceSetUpOption(SourceSetUpOption&& value) { m_sourceSetUpOptionHasBeenSet = true; m_sourceSetUpOption = std::move(value); }
    inline ControlMappingSource& WithSourceSetUpOption(const SourceSetUpOption& value) { SetSourceSetUpOption(value); return *this;}
    inline ControlMappingSource& WithSourceSetUpOption(SourceSetUpOption&& value) { SetSourceSetUpOption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies which type of data source is used to collect evidence. </p> <ul>
     * <li> <p>The source can be an individual data source type, such as
     * <code>AWS_Cloudtrail</code>, <code>AWS_Config</code>,
     * <code>AWS_Security_Hub</code>, <code>AWS_API_Call</code>, or
     * <code>MANUAL</code>. </p> </li> <li> <p>The source can also be a managed
     * grouping of data sources, such as a <code>Core_Control</code> or a
     * <code>Common_Control</code>.</p> </li> </ul>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline ControlMappingSource& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}
    inline ControlMappingSource& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SourceKeyword& GetSourceKeyword() const{ return m_sourceKeyword; }
    inline bool SourceKeywordHasBeenSet() const { return m_sourceKeywordHasBeenSet; }
    inline void SetSourceKeyword(const SourceKeyword& value) { m_sourceKeywordHasBeenSet = true; m_sourceKeyword = value; }
    inline void SetSourceKeyword(SourceKeyword&& value) { m_sourceKeywordHasBeenSet = true; m_sourceKeyword = std::move(value); }
    inline ControlMappingSource& WithSourceKeyword(const SourceKeyword& value) { SetSourceKeyword(value); return *this;}
    inline ControlMappingSource& WithSourceKeyword(SourceKeyword&& value) { SetSourceKeyword(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how often evidence is collected from the control mapping source.
     * </p>
     */
    inline const SourceFrequency& GetSourceFrequency() const{ return m_sourceFrequency; }
    inline bool SourceFrequencyHasBeenSet() const { return m_sourceFrequencyHasBeenSet; }
    inline void SetSourceFrequency(const SourceFrequency& value) { m_sourceFrequencyHasBeenSet = true; m_sourceFrequency = value; }
    inline void SetSourceFrequency(SourceFrequency&& value) { m_sourceFrequencyHasBeenSet = true; m_sourceFrequency = std::move(value); }
    inline ControlMappingSource& WithSourceFrequency(const SourceFrequency& value) { SetSourceFrequency(value); return *this;}
    inline ControlMappingSource& WithSourceFrequency(SourceFrequency&& value) { SetSourceFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instructions for troubleshooting the control. </p>
     */
    inline const Aws::String& GetTroubleshootingText() const{ return m_troubleshootingText; }
    inline bool TroubleshootingTextHasBeenSet() const { return m_troubleshootingTextHasBeenSet; }
    inline void SetTroubleshootingText(const Aws::String& value) { m_troubleshootingTextHasBeenSet = true; m_troubleshootingText = value; }
    inline void SetTroubleshootingText(Aws::String&& value) { m_troubleshootingTextHasBeenSet = true; m_troubleshootingText = std::move(value); }
    inline void SetTroubleshootingText(const char* value) { m_troubleshootingTextHasBeenSet = true; m_troubleshootingText.assign(value); }
    inline ControlMappingSource& WithTroubleshootingText(const Aws::String& value) { SetTroubleshootingText(value); return *this;}
    inline ControlMappingSource& WithTroubleshootingText(Aws::String&& value) { SetTroubleshootingText(std::move(value)); return *this;}
    inline ControlMappingSource& WithTroubleshootingText(const char* value) { SetTroubleshootingText(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceDescription;
    bool m_sourceDescriptionHasBeenSet = false;

    SourceSetUpOption m_sourceSetUpOption;
    bool m_sourceSetUpOptionHasBeenSet = false;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    SourceKeyword m_sourceKeyword;
    bool m_sourceKeywordHasBeenSet = false;

    SourceFrequency m_sourceFrequency;
    bool m_sourceFrequencyHasBeenSet = false;

    Aws::String m_troubleshootingText;
    bool m_troubleshootingTextHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
