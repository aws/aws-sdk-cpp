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
   * <p>An array of the Amazon S3 keys used to identify the location for your sample
   * documents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/SampleDocumentKeys">AWS
   * API Reference</a></p>
   */
  class SampleDocumentKeys
  {
  public:
    AWS_B2BI_API SampleDocumentKeys();
    AWS_B2BI_API SampleDocumentKeys(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API SampleDocumentKeys& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of keys for your input sample documents.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline SampleDocumentKeys& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline SampleDocumentKeys& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline SampleDocumentKeys& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of keys for your output sample documents.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const Aws::String& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(Aws::String&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline void SetOutput(const char* value) { m_outputHasBeenSet = true; m_output.assign(value); }
    inline SampleDocumentKeys& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}
    inline SampleDocumentKeys& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}
    inline SampleDocumentKeys& WithOutput(const char* value) { SetOutput(value); return *this;}
    ///@}
  private:

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_output;
    bool m_outputHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
