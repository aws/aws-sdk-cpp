/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/TransformerStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/b2bi/model/InputConversion.h>
#include <aws/b2bi/model/Mapping.h>
#include <aws/b2bi/model/OutputConversion.h>
#include <aws/b2bi/model/SampleDocuments.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Contains the details for a transformer object. A transformer can take an EDI
   * file as input and transform it into a JSON-or XML-formatted document.
   * Alternatively, a transformer can take a JSON-or XML-formatted document as input
   * and transform it into an EDI file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/TransformerSummary">AWS
   * API Reference</a></p>
   */
  class TransformerSummary
  {
  public:
    AWS_B2BI_API TransformerSummary() = default;
    AWS_B2BI_API TransformerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API TransformerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const { return m_transformerId; }
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }
    template<typename TransformerIdT = Aws::String>
    void SetTransformerId(TransformerIdT&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::forward<TransformerIdT>(value); }
    template<typename TransformerIdT = Aws::String>
    TransformerSummary& WithTransformerId(TransformerIdT&& value) { SetTransformerId(std::forward<TransformerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the descriptive name for the transformer.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TransformerSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline TransformerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TransformerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TransformerSummary& WithStatus(TransformerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp indicating when the transformer was created. For example,
     * <code>2023-07-20T19:58:44.624Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    TransformerSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp representing the date and time for the most recent change
     * for the transformer object.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    TransformerSummary& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a structure that contains the format options for the
     * transformation.</p>
     */
    inline const InputConversion& GetInputConversion() const { return m_inputConversion; }
    inline bool InputConversionHasBeenSet() const { return m_inputConversionHasBeenSet; }
    template<typename InputConversionT = InputConversion>
    void SetInputConversion(InputConversionT&& value) { m_inputConversionHasBeenSet = true; m_inputConversion = std::forward<InputConversionT>(value); }
    template<typename InputConversionT = InputConversion>
    TransformerSummary& WithInputConversion(InputConversionT&& value) { SetInputConversion(std::forward<InputConversionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the structure that contains the mapping template and its language
     * (either XSLT or JSONATA).</p>
     */
    inline const Mapping& GetMapping() const { return m_mapping; }
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }
    template<typename MappingT = Mapping>
    void SetMapping(MappingT&& value) { m_mappingHasBeenSet = true; m_mapping = std::forward<MappingT>(value); }
    template<typename MappingT = Mapping>
    TransformerSummary& WithMapping(MappingT&& value) { SetMapping(std::forward<MappingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the <code>OutputConversion</code> object, which contains the format
     * options for the outbound transformation.</p>
     */
    inline const OutputConversion& GetOutputConversion() const { return m_outputConversion; }
    inline bool OutputConversionHasBeenSet() const { return m_outputConversionHasBeenSet; }
    template<typename OutputConversionT = OutputConversion>
    void SetOutputConversion(OutputConversionT&& value) { m_outputConversionHasBeenSet = true; m_outputConversion = std::forward<OutputConversionT>(value); }
    template<typename OutputConversionT = OutputConversion>
    TransformerSummary& WithOutputConversion(OutputConversionT&& value) { SetOutputConversion(std::forward<OutputConversionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a structure that contains the Amazon S3 bucket and an array of the
     * corresponding keys used to identify the location for your sample documents.</p>
     */
    inline const SampleDocuments& GetSampleDocuments() const { return m_sampleDocuments; }
    inline bool SampleDocumentsHasBeenSet() const { return m_sampleDocumentsHasBeenSet; }
    template<typename SampleDocumentsT = SampleDocuments>
    void SetSampleDocuments(SampleDocumentsT&& value) { m_sampleDocumentsHasBeenSet = true; m_sampleDocuments = std::forward<SampleDocumentsT>(value); }
    template<typename SampleDocumentsT = SampleDocuments>
    TransformerSummary& WithSampleDocuments(SampleDocumentsT&& value) { SetSampleDocuments(std::forward<SampleDocumentsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TransformerStatus m_status{TransformerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    InputConversion m_inputConversion;
    bool m_inputConversionHasBeenSet = false;

    Mapping m_mapping;
    bool m_mappingHasBeenSet = false;

    OutputConversion m_outputConversion;
    bool m_outputConversionHasBeenSet = false;

    SampleDocuments m_sampleDocuments;
    bool m_sampleDocumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
