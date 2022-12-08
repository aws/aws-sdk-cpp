/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/ProtectiveEquipmentSummary.h>
#include <aws/rekognition/model/ProtectiveEquipmentPerson.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class DetectProtectiveEquipmentResult
  {
  public:
    AWS_REKOGNITION_API DetectProtectiveEquipmentResult();
    AWS_REKOGNITION_API DetectProtectiveEquipmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectProtectiveEquipmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version number of the PPE detection model used to detect PPE in the
     * image.</p>
     */
    inline const Aws::String& GetProtectiveEquipmentModelVersion() const{ return m_protectiveEquipmentModelVersion; }

    /**
     * <p>The version number of the PPE detection model used to detect PPE in the
     * image.</p>
     */
    inline void SetProtectiveEquipmentModelVersion(const Aws::String& value) { m_protectiveEquipmentModelVersion = value; }

    /**
     * <p>The version number of the PPE detection model used to detect PPE in the
     * image.</p>
     */
    inline void SetProtectiveEquipmentModelVersion(Aws::String&& value) { m_protectiveEquipmentModelVersion = std::move(value); }

    /**
     * <p>The version number of the PPE detection model used to detect PPE in the
     * image.</p>
     */
    inline void SetProtectiveEquipmentModelVersion(const char* value) { m_protectiveEquipmentModelVersion.assign(value); }

    /**
     * <p>The version number of the PPE detection model used to detect PPE in the
     * image.</p>
     */
    inline DetectProtectiveEquipmentResult& WithProtectiveEquipmentModelVersion(const Aws::String& value) { SetProtectiveEquipmentModelVersion(value); return *this;}

    /**
     * <p>The version number of the PPE detection model used to detect PPE in the
     * image.</p>
     */
    inline DetectProtectiveEquipmentResult& WithProtectiveEquipmentModelVersion(Aws::String&& value) { SetProtectiveEquipmentModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the PPE detection model used to detect PPE in the
     * image.</p>
     */
    inline DetectProtectiveEquipmentResult& WithProtectiveEquipmentModelVersion(const char* value) { SetProtectiveEquipmentModelVersion(value); return *this;}


    /**
     * <p>An array of persons detected in the image (including persons not wearing
     * PPE).</p>
     */
    inline const Aws::Vector<ProtectiveEquipmentPerson>& GetPersons() const{ return m_persons; }

    /**
     * <p>An array of persons detected in the image (including persons not wearing
     * PPE).</p>
     */
    inline void SetPersons(const Aws::Vector<ProtectiveEquipmentPerson>& value) { m_persons = value; }

    /**
     * <p>An array of persons detected in the image (including persons not wearing
     * PPE).</p>
     */
    inline void SetPersons(Aws::Vector<ProtectiveEquipmentPerson>&& value) { m_persons = std::move(value); }

    /**
     * <p>An array of persons detected in the image (including persons not wearing
     * PPE).</p>
     */
    inline DetectProtectiveEquipmentResult& WithPersons(const Aws::Vector<ProtectiveEquipmentPerson>& value) { SetPersons(value); return *this;}

    /**
     * <p>An array of persons detected in the image (including persons not wearing
     * PPE).</p>
     */
    inline DetectProtectiveEquipmentResult& WithPersons(Aws::Vector<ProtectiveEquipmentPerson>&& value) { SetPersons(std::move(value)); return *this;}

    /**
     * <p>An array of persons detected in the image (including persons not wearing
     * PPE).</p>
     */
    inline DetectProtectiveEquipmentResult& AddPersons(const ProtectiveEquipmentPerson& value) { m_persons.push_back(value); return *this; }

    /**
     * <p>An array of persons detected in the image (including persons not wearing
     * PPE).</p>
     */
    inline DetectProtectiveEquipmentResult& AddPersons(ProtectiveEquipmentPerson&& value) { m_persons.push_back(std::move(value)); return *this; }


    /**
     * <p>Summary information for the types of PPE specified in the
     * <code>SummarizationAttributes</code> input parameter.</p>
     */
    inline const ProtectiveEquipmentSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>Summary information for the types of PPE specified in the
     * <code>SummarizationAttributes</code> input parameter.</p>
     */
    inline void SetSummary(const ProtectiveEquipmentSummary& value) { m_summary = value; }

    /**
     * <p>Summary information for the types of PPE specified in the
     * <code>SummarizationAttributes</code> input parameter.</p>
     */
    inline void SetSummary(ProtectiveEquipmentSummary&& value) { m_summary = std::move(value); }

    /**
     * <p>Summary information for the types of PPE specified in the
     * <code>SummarizationAttributes</code> input parameter.</p>
     */
    inline DetectProtectiveEquipmentResult& WithSummary(const ProtectiveEquipmentSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>Summary information for the types of PPE specified in the
     * <code>SummarizationAttributes</code> input parameter.</p>
     */
    inline DetectProtectiveEquipmentResult& WithSummary(ProtectiveEquipmentSummary&& value) { SetSummary(std::move(value)); return *this;}

  private:

    Aws::String m_protectiveEquipmentModelVersion;

    Aws::Vector<ProtectiveEquipmentPerson> m_persons;

    ProtectiveEquipmentSummary m_summary;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
