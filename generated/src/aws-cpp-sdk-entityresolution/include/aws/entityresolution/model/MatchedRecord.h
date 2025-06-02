/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> The matched record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/MatchedRecord">AWS
   * API Reference</a></p>
   */
  class MatchedRecord
  {
  public:
    AWS_ENTITYRESOLUTION_API MatchedRecord() = default;
    AWS_ENTITYRESOLUTION_API MatchedRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API MatchedRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The input source ARN of the matched record.</p>
     */
    inline const Aws::String& GetInputSourceARN() const { return m_inputSourceARN; }
    inline bool InputSourceARNHasBeenSet() const { return m_inputSourceARNHasBeenSet; }
    template<typename InputSourceARNT = Aws::String>
    void SetInputSourceARN(InputSourceARNT&& value) { m_inputSourceARNHasBeenSet = true; m_inputSourceARN = std::forward<InputSourceARNT>(value); }
    template<typename InputSourceARNT = Aws::String>
    MatchedRecord& WithInputSourceARN(InputSourceARNT&& value) { SetInputSourceARN(std::forward<InputSourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The record ID of the matched record.</p>
     */
    inline const Aws::String& GetRecordId() const { return m_recordId; }
    inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
    template<typename RecordIdT = Aws::String>
    void SetRecordId(RecordIdT&& value) { m_recordIdHasBeenSet = true; m_recordId = std::forward<RecordIdT>(value); }
    template<typename RecordIdT = Aws::String>
    MatchedRecord& WithRecordId(RecordIdT&& value) { SetRecordId(std::forward<RecordIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputSourceARN;
    bool m_inputSourceARNHasBeenSet = false;

    Aws::String m_recordId;
    bool m_recordIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
