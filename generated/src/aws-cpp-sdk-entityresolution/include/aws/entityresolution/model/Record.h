/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p> The record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/Record">AWS
   * API Reference</a></p>
   */
  class Record
  {
  public:
    AWS_ENTITYRESOLUTION_API Record() = default;
    AWS_ENTITYRESOLUTION_API Record(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The input source ARN of the record.</p>
     */
    inline const Aws::String& GetInputSourceARN() const { return m_inputSourceARN; }
    inline bool InputSourceARNHasBeenSet() const { return m_inputSourceARNHasBeenSet; }
    template<typename InputSourceARNT = Aws::String>
    void SetInputSourceARN(InputSourceARNT&& value) { m_inputSourceARNHasBeenSet = true; m_inputSourceARN = std::forward<InputSourceARNT>(value); }
    template<typename InputSourceARNT = Aws::String>
    Record& WithInputSourceARN(InputSourceARNT&& value) { SetInputSourceARN(std::forward<InputSourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID of the record.</p>
     */
    inline const Aws::String& GetUniqueId() const { return m_uniqueId; }
    inline bool UniqueIdHasBeenSet() const { return m_uniqueIdHasBeenSet; }
    template<typename UniqueIdT = Aws::String>
    void SetUniqueId(UniqueIdT&& value) { m_uniqueIdHasBeenSet = true; m_uniqueId = std::forward<UniqueIdT>(value); }
    template<typename UniqueIdT = Aws::String>
    Record& WithUniqueId(UniqueIdT&& value) { SetUniqueId(std::forward<UniqueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The record's attribute map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRecordAttributeMap() const { return m_recordAttributeMap; }
    inline bool RecordAttributeMapHasBeenSet() const { return m_recordAttributeMapHasBeenSet; }
    template<typename RecordAttributeMapT = Aws::Map<Aws::String, Aws::String>>
    void SetRecordAttributeMap(RecordAttributeMapT&& value) { m_recordAttributeMapHasBeenSet = true; m_recordAttributeMap = std::forward<RecordAttributeMapT>(value); }
    template<typename RecordAttributeMapT = Aws::Map<Aws::String, Aws::String>>
    Record& WithRecordAttributeMap(RecordAttributeMapT&& value) { SetRecordAttributeMap(std::forward<RecordAttributeMapT>(value)); return *this;}
    template<typename RecordAttributeMapKeyT = Aws::String, typename RecordAttributeMapValueT = Aws::String>
    Record& AddRecordAttributeMap(RecordAttributeMapKeyT&& key, RecordAttributeMapValueT&& value) {
      m_recordAttributeMapHasBeenSet = true; m_recordAttributeMap.emplace(std::forward<RecordAttributeMapKeyT>(key), std::forward<RecordAttributeMapValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_inputSourceARN;
    bool m_inputSourceARNHasBeenSet = false;

    Aws::String m_uniqueId;
    bool m_uniqueIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_recordAttributeMap;
    bool m_recordAttributeMapHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
