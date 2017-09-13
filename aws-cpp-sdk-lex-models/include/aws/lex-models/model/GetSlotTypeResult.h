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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lex-models/model/SlotValueSelectionStrategy.h>
#include <aws/lex-models/model/EnumerationValue.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class AWS_LEXMODELBUILDINGSERVICE_API GetSlotTypeResult
  {
  public:
    GetSlotTypeResult();
    GetSlotTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSlotTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the slot type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the slot type.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the slot type.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the slot type.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the slot type.</p>
     */
    inline GetSlotTypeResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the slot type.</p>
     */
    inline GetSlotTypeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the slot type.</p>
     */
    inline GetSlotTypeResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the slot type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the slot type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the slot type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the slot type.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the slot type.</p>
     */
    inline GetSlotTypeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the slot type.</p>
     */
    inline GetSlotTypeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the slot type.</p>
     */
    inline GetSlotTypeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take.</p>
     */
    inline const Aws::Vector<EnumerationValue>& GetEnumerationValues() const{ return m_enumerationValues; }

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take.</p>
     */
    inline void SetEnumerationValues(const Aws::Vector<EnumerationValue>& value) { m_enumerationValues = value; }

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take.</p>
     */
    inline void SetEnumerationValues(Aws::Vector<EnumerationValue>&& value) { m_enumerationValues = std::move(value); }

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take.</p>
     */
    inline GetSlotTypeResult& WithEnumerationValues(const Aws::Vector<EnumerationValue>& value) { SetEnumerationValues(value); return *this;}

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take.</p>
     */
    inline GetSlotTypeResult& WithEnumerationValues(Aws::Vector<EnumerationValue>&& value) { SetEnumerationValues(std::move(value)); return *this;}

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take.</p>
     */
    inline GetSlotTypeResult& AddEnumerationValues(const EnumerationValue& value) { m_enumerationValues.push_back(value); return *this; }

    /**
     * <p>A list of <code>EnumerationValue</code> objects that defines the values that
     * the slot type can take.</p>
     */
    inline GetSlotTypeResult& AddEnumerationValues(EnumerationValue&& value) { m_enumerationValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The date that the slot type was updated. When you create a resource, the
     * creation date and last update date are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }

    /**
     * <p>The date that the slot type was updated. When you create a resource, the
     * creation date and last update date are the same.</p>
     */
    inline void SetLastUpdatedDate(const Aws::Utils::DateTime& value) { m_lastUpdatedDate = value; }

    /**
     * <p>The date that the slot type was updated. When you create a resource, the
     * creation date and last update date are the same.</p>
     */
    inline void SetLastUpdatedDate(Aws::Utils::DateTime&& value) { m_lastUpdatedDate = std::move(value); }

    /**
     * <p>The date that the slot type was updated. When you create a resource, the
     * creation date and last update date are the same.</p>
     */
    inline GetSlotTypeResult& WithLastUpdatedDate(const Aws::Utils::DateTime& value) { SetLastUpdatedDate(value); return *this;}

    /**
     * <p>The date that the slot type was updated. When you create a resource, the
     * creation date and last update date are the same.</p>
     */
    inline GetSlotTypeResult& WithLastUpdatedDate(Aws::Utils::DateTime&& value) { SetLastUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>The date that the slot type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the slot type was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date that the slot type was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date that the slot type was created.</p>
     */
    inline GetSlotTypeResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the slot type was created.</p>
     */
    inline GetSlotTypeResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The version of the slot type.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the slot type.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>The version of the slot type.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>The version of the slot type.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>The version of the slot type.</p>
     */
    inline GetSlotTypeResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the slot type.</p>
     */
    inline GetSlotTypeResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the slot type.</p>
     */
    inline GetSlotTypeResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Checksum of the <code>$LATEST</code> version of the slot type.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the slot type.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the slot type.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the slot type.</p>
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the slot type.</p>
     */
    inline GetSlotTypeResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the slot type.</p>
     */
    inline GetSlotTypeResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>Checksum of the <code>$LATEST</code> version of the slot type.</p>
     */
    inline GetSlotTypeResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>The strategy that Amazon Lex uses to determine the value of the slot. For
     * more information, see <a>PutSlotType</a>.</p>
     */
    inline const SlotValueSelectionStrategy& GetValueSelectionStrategy() const{ return m_valueSelectionStrategy; }

    /**
     * <p>The strategy that Amazon Lex uses to determine the value of the slot. For
     * more information, see <a>PutSlotType</a>.</p>
     */
    inline void SetValueSelectionStrategy(const SlotValueSelectionStrategy& value) { m_valueSelectionStrategy = value; }

    /**
     * <p>The strategy that Amazon Lex uses to determine the value of the slot. For
     * more information, see <a>PutSlotType</a>.</p>
     */
    inline void SetValueSelectionStrategy(SlotValueSelectionStrategy&& value) { m_valueSelectionStrategy = std::move(value); }

    /**
     * <p>The strategy that Amazon Lex uses to determine the value of the slot. For
     * more information, see <a>PutSlotType</a>.</p>
     */
    inline GetSlotTypeResult& WithValueSelectionStrategy(const SlotValueSelectionStrategy& value) { SetValueSelectionStrategy(value); return *this;}

    /**
     * <p>The strategy that Amazon Lex uses to determine the value of the slot. For
     * more information, see <a>PutSlotType</a>.</p>
     */
    inline GetSlotTypeResult& WithValueSelectionStrategy(SlotValueSelectionStrategy&& value) { SetValueSelectionStrategy(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::Vector<EnumerationValue> m_enumerationValues;

    Aws::Utils::DateTime m_lastUpdatedDate;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_version;

    Aws::String m_checksum;

    SlotValueSelectionStrategy m_valueSelectionStrategy;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
