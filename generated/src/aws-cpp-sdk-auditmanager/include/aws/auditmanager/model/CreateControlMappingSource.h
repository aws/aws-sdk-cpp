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
   * <p>The mapping attributes that determine the evidence source for a given
   * control, along with related parameters and metadata. This doesn't contain
   * <code>mappingID</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateControlMappingSource">AWS
   * API Reference</a></p>
   */
  class CreateControlMappingSource
  {
  public:
    AWS_AUDITMANAGER_API CreateControlMappingSource();
    AWS_AUDITMANAGER_API CreateControlMappingSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API CreateControlMappingSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the control mapping data source. </p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }
    inline CreateControlMappingSource& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}
    inline CreateControlMappingSource& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}
    inline CreateControlMappingSource& WithSourceName(const char* value) { SetSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the data source that determines where Audit Manager
     * collects evidence from for the control. </p>
     */
    inline const Aws::String& GetSourceDescription() const{ return m_sourceDescription; }
    inline bool SourceDescriptionHasBeenSet() const { return m_sourceDescriptionHasBeenSet; }
    inline void SetSourceDescription(const Aws::String& value) { m_sourceDescriptionHasBeenSet = true; m_sourceDescription = value; }
    inline void SetSourceDescription(Aws::String&& value) { m_sourceDescriptionHasBeenSet = true; m_sourceDescription = std::move(value); }
    inline void SetSourceDescription(const char* value) { m_sourceDescriptionHasBeenSet = true; m_sourceDescription.assign(value); }
    inline CreateControlMappingSource& WithSourceDescription(const Aws::String& value) { SetSourceDescription(value); return *this;}
    inline CreateControlMappingSource& WithSourceDescription(Aws::String&& value) { SetSourceDescription(std::move(value)); return *this;}
    inline CreateControlMappingSource& WithSourceDescription(const char* value) { SetSourceDescription(value); return *this;}
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
    inline CreateControlMappingSource& WithSourceSetUpOption(const SourceSetUpOption& value) { SetSourceSetUpOption(value); return *this;}
    inline CreateControlMappingSource& WithSourceSetUpOption(SourceSetUpOption&& value) { SetSourceSetUpOption(std::move(value)); return *this;}
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
    inline CreateControlMappingSource& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}
    inline CreateControlMappingSource& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SourceKeyword& GetSourceKeyword() const{ return m_sourceKeyword; }
    inline bool SourceKeywordHasBeenSet() const { return m_sourceKeywordHasBeenSet; }
    inline void SetSourceKeyword(const SourceKeyword& value) { m_sourceKeywordHasBeenSet = true; m_sourceKeyword = value; }
    inline void SetSourceKeyword(SourceKeyword&& value) { m_sourceKeywordHasBeenSet = true; m_sourceKeyword = std::move(value); }
    inline CreateControlMappingSource& WithSourceKeyword(const SourceKeyword& value) { SetSourceKeyword(value); return *this;}
    inline CreateControlMappingSource& WithSourceKeyword(SourceKeyword&& value) { SetSourceKeyword(std::move(value)); return *this;}
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
    inline CreateControlMappingSource& WithSourceFrequency(const SourceFrequency& value) { SetSourceFrequency(value); return *this;}
    inline CreateControlMappingSource& WithSourceFrequency(SourceFrequency&& value) { SetSourceFrequency(std::move(value)); return *this;}
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
    inline CreateControlMappingSource& WithTroubleshootingText(const Aws::String& value) { SetTroubleshootingText(value); return *this;}
    inline CreateControlMappingSource& WithTroubleshootingText(Aws::String&& value) { SetTroubleshootingText(std::move(value)); return *this;}
    inline CreateControlMappingSource& WithTroubleshootingText(const char* value) { SetTroubleshootingText(value); return *this;}
    ///@}
  private:

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
