/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>In X12 EDI messages, delimiters are used to mark the end of segments or
   * elements, and are defined in the interchange control header. The delimiters are
   * part of the message's syntax and divide up its different elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12Delimiters">AWS
   * API Reference</a></p>
   */
  class X12Delimiters
  {
  public:
    AWS_B2BI_API X12Delimiters() = default;
    AWS_B2BI_API X12Delimiters(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12Delimiters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The component, or sub-element, separator. The default value is <code>:</code>
     * (colon).</p>
     */
    inline const Aws::String& GetComponentSeparator() const { return m_componentSeparator; }
    inline bool ComponentSeparatorHasBeenSet() const { return m_componentSeparatorHasBeenSet; }
    template<typename ComponentSeparatorT = Aws::String>
    void SetComponentSeparator(ComponentSeparatorT&& value) { m_componentSeparatorHasBeenSet = true; m_componentSeparator = std::forward<ComponentSeparatorT>(value); }
    template<typename ComponentSeparatorT = Aws::String>
    X12Delimiters& WithComponentSeparator(ComponentSeparatorT&& value) { SetComponentSeparator(std::forward<ComponentSeparatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data element separator. The default value is <code>*</code>
     * (asterisk).</p>
     */
    inline const Aws::String& GetDataElementSeparator() const { return m_dataElementSeparator; }
    inline bool DataElementSeparatorHasBeenSet() const { return m_dataElementSeparatorHasBeenSet; }
    template<typename DataElementSeparatorT = Aws::String>
    void SetDataElementSeparator(DataElementSeparatorT&& value) { m_dataElementSeparatorHasBeenSet = true; m_dataElementSeparator = std::forward<DataElementSeparatorT>(value); }
    template<typename DataElementSeparatorT = Aws::String>
    X12Delimiters& WithDataElementSeparator(DataElementSeparatorT&& value) { SetDataElementSeparator(std::forward<DataElementSeparatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The segment terminator. The default value is <code>~</code> (tilde).</p>
     */
    inline const Aws::String& GetSegmentTerminator() const { return m_segmentTerminator; }
    inline bool SegmentTerminatorHasBeenSet() const { return m_segmentTerminatorHasBeenSet; }
    template<typename SegmentTerminatorT = Aws::String>
    void SetSegmentTerminator(SegmentTerminatorT&& value) { m_segmentTerminatorHasBeenSet = true; m_segmentTerminator = std::forward<SegmentTerminatorT>(value); }
    template<typename SegmentTerminatorT = Aws::String>
    X12Delimiters& WithSegmentTerminator(SegmentTerminatorT&& value) { SetSegmentTerminator(std::forward<SegmentTerminatorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentSeparator;
    bool m_componentSeparatorHasBeenSet = false;

    Aws::String m_dataElementSeparator;
    bool m_dataElementSeparatorHasBeenSet = false;

    Aws::String m_segmentTerminator;
    bool m_segmentTerminatorHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
