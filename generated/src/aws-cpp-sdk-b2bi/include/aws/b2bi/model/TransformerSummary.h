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
    AWS_B2BI_API TransformerSummary();
    AWS_B2BI_API TransformerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API TransformerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns the system-assigned unique identifier for the transformer.</p>
     */
    inline const Aws::String& GetTransformerId() const{ return m_transformerId; }
    inline bool TransformerIdHasBeenSet() const { return m_transformerIdHasBeenSet; }
    inline void SetTransformerId(const Aws::String& value) { m_transformerIdHasBeenSet = true; m_transformerId = value; }
    inline void SetTransformerId(Aws::String&& value) { m_transformerIdHasBeenSet = true; m_transformerId = std::move(value); }
    inline void SetTransformerId(const char* value) { m_transformerIdHasBeenSet = true; m_transformerId.assign(value); }
    inline TransformerSummary& WithTransformerId(const Aws::String& value) { SetTransformerId(value); return *this;}
    inline TransformerSummary& WithTransformerId(Aws::String&& value) { SetTransformerId(std::move(value)); return *this;}
    inline TransformerSummary& WithTransformerId(const char* value) { SetTransformerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the descriptive name for the transformer.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline TransformerSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline TransformerSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline TransformerSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the state of the newly created transformer. The transformer can be
     * either <code>active</code> or <code>inactive</code>. For the transformer to be
     * used in a capability, its status must <code>active</code>.</p>
     */
    inline const TransformerStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TransformerStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TransformerStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TransformerSummary& WithStatus(const TransformerStatus& value) { SetStatus(value); return *this;}
    inline TransformerSummary& WithStatus(TransformerStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp indicating when the transformer was created. For example,
     * <code>2023-07-20T19:58:44.624Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline TransformerSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline TransformerSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a timestamp representing the date and time for the most recent change
     * for the transformer object.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline TransformerSummary& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline TransformerSummary& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a structure that contains the format options for the
     * transformation.</p>
     */
    inline const InputConversion& GetInputConversion() const{ return m_inputConversion; }
    inline bool InputConversionHasBeenSet() const { return m_inputConversionHasBeenSet; }
    inline void SetInputConversion(const InputConversion& value) { m_inputConversionHasBeenSet = true; m_inputConversion = value; }
    inline void SetInputConversion(InputConversion&& value) { m_inputConversionHasBeenSet = true; m_inputConversion = std::move(value); }
    inline TransformerSummary& WithInputConversion(const InputConversion& value) { SetInputConversion(value); return *this;}
    inline TransformerSummary& WithInputConversion(InputConversion&& value) { SetInputConversion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the structure that contains the mapping template and its language
     * (either XSLT or JSONATA).</p>
     */
    inline const Mapping& GetMapping() const{ return m_mapping; }
    inline bool MappingHasBeenSet() const { return m_mappingHasBeenSet; }
    inline void SetMapping(const Mapping& value) { m_mappingHasBeenSet = true; m_mapping = value; }
    inline void SetMapping(Mapping&& value) { m_mappingHasBeenSet = true; m_mapping = std::move(value); }
    inline TransformerSummary& WithMapping(const Mapping& value) { SetMapping(value); return *this;}
    inline TransformerSummary& WithMapping(Mapping&& value) { SetMapping(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the <code>OutputConversion</code> object, which contains the format
     * options for the outbound transformation.</p>
     */
    inline const OutputConversion& GetOutputConversion() const{ return m_outputConversion; }
    inline bool OutputConversionHasBeenSet() const { return m_outputConversionHasBeenSet; }
    inline void SetOutputConversion(const OutputConversion& value) { m_outputConversionHasBeenSet = true; m_outputConversion = value; }
    inline void SetOutputConversion(OutputConversion&& value) { m_outputConversionHasBeenSet = true; m_outputConversion = std::move(value); }
    inline TransformerSummary& WithOutputConversion(const OutputConversion& value) { SetOutputConversion(value); return *this;}
    inline TransformerSummary& WithOutputConversion(OutputConversion&& value) { SetOutputConversion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a structure that contains the Amazon S3 bucket and an array of the
     * corresponding keys used to identify the location for your sample documents.</p>
     */
    inline const SampleDocuments& GetSampleDocuments() const{ return m_sampleDocuments; }
    inline bool SampleDocumentsHasBeenSet() const { return m_sampleDocumentsHasBeenSet; }
    inline void SetSampleDocuments(const SampleDocuments& value) { m_sampleDocumentsHasBeenSet = true; m_sampleDocuments = value; }
    inline void SetSampleDocuments(SampleDocuments&& value) { m_sampleDocumentsHasBeenSet = true; m_sampleDocuments = std::move(value); }
    inline TransformerSummary& WithSampleDocuments(const SampleDocuments& value) { SetSampleDocuments(value); return *this;}
    inline TransformerSummary& WithSampleDocuments(SampleDocuments&& value) { SetSampleDocuments(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformerId;
    bool m_transformerIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TransformerStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
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
