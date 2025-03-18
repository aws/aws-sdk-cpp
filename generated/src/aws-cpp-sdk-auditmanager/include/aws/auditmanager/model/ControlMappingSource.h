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
    AWS_AUDITMANAGER_API ControlMappingSource() = default;
    AWS_AUDITMANAGER_API ControlMappingSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ControlMappingSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the source. </p>
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    ControlMappingSource& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the source. </p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    ControlMappingSource& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the source. </p>
     */
    inline const Aws::String& GetSourceDescription() const { return m_sourceDescription; }
    inline bool SourceDescriptionHasBeenSet() const { return m_sourceDescriptionHasBeenSet; }
    template<typename SourceDescriptionT = Aws::String>
    void SetSourceDescription(SourceDescriptionT&& value) { m_sourceDescriptionHasBeenSet = true; m_sourceDescription = std::forward<SourceDescriptionT>(value); }
    template<typename SourceDescriptionT = Aws::String>
    ControlMappingSource& WithSourceDescription(SourceDescriptionT&& value) { SetSourceDescription(std::forward<SourceDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setup option for the data source. This option reflects if the evidence
     * collection method is automated or manual. If you don’t provide a value for
     * <code>sourceSetUpOption</code>, Audit Manager automatically infers and populates
     * the correct value based on the <code>sourceType</code> that you specify.</p>
     */
    inline SourceSetUpOption GetSourceSetUpOption() const { return m_sourceSetUpOption; }
    inline bool SourceSetUpOptionHasBeenSet() const { return m_sourceSetUpOptionHasBeenSet; }
    inline void SetSourceSetUpOption(SourceSetUpOption value) { m_sourceSetUpOptionHasBeenSet = true; m_sourceSetUpOption = value; }
    inline ControlMappingSource& WithSourceSetUpOption(SourceSetUpOption value) { SetSourceSetUpOption(value); return *this;}
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
    inline SourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(SourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline ControlMappingSource& WithSourceType(SourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    
    inline const SourceKeyword& GetSourceKeyword() const { return m_sourceKeyword; }
    inline bool SourceKeywordHasBeenSet() const { return m_sourceKeywordHasBeenSet; }
    template<typename SourceKeywordT = SourceKeyword>
    void SetSourceKeyword(SourceKeywordT&& value) { m_sourceKeywordHasBeenSet = true; m_sourceKeyword = std::forward<SourceKeywordT>(value); }
    template<typename SourceKeywordT = SourceKeyword>
    ControlMappingSource& WithSourceKeyword(SourceKeywordT&& value) { SetSourceKeyword(std::forward<SourceKeywordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how often evidence is collected from the control mapping source.
     * </p>
     */
    inline SourceFrequency GetSourceFrequency() const { return m_sourceFrequency; }
    inline bool SourceFrequencyHasBeenSet() const { return m_sourceFrequencyHasBeenSet; }
    inline void SetSourceFrequency(SourceFrequency value) { m_sourceFrequencyHasBeenSet = true; m_sourceFrequency = value; }
    inline ControlMappingSource& WithSourceFrequency(SourceFrequency value) { SetSourceFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The instructions for troubleshooting the control. </p>
     */
    inline const Aws::String& GetTroubleshootingText() const { return m_troubleshootingText; }
    inline bool TroubleshootingTextHasBeenSet() const { return m_troubleshootingTextHasBeenSet; }
    template<typename TroubleshootingTextT = Aws::String>
    void SetTroubleshootingText(TroubleshootingTextT&& value) { m_troubleshootingTextHasBeenSet = true; m_troubleshootingText = std::forward<TroubleshootingTextT>(value); }
    template<typename TroubleshootingTextT = Aws::String>
    ControlMappingSource& WithTroubleshootingText(TroubleshootingTextT&& value) { SetTroubleshootingText(std::forward<TroubleshootingTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceDescription;
    bool m_sourceDescriptionHasBeenSet = false;

    SourceSetUpOption m_sourceSetUpOption{SourceSetUpOption::NOT_SET};
    bool m_sourceSetUpOptionHasBeenSet = false;

    SourceType m_sourceType{SourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    SourceKeyword m_sourceKeyword;
    bool m_sourceKeywordHasBeenSet = false;

    SourceFrequency m_sourceFrequency{SourceFrequency::NOT_SET};
    bool m_sourceFrequencyHasBeenSet = false;

    Aws::String m_troubleshootingText;
    bool m_troubleshootingTextHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
