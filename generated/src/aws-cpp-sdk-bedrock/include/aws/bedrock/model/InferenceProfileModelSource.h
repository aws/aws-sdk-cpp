/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Contains information about the model or system-defined inference profile that
   * is the source for an inference profile..</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/InferenceProfileModelSource">AWS
   * API Reference</a></p>
   */
  class InferenceProfileModelSource
  {
  public:
    AWS_BEDROCK_API InferenceProfileModelSource() = default;
    AWS_BEDROCK_API InferenceProfileModelSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API InferenceProfileModelSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the model or system-defined inference profile that is the source
     * for the inference profile.</p>
     */
    inline const Aws::String& GetCopyFrom() const { return m_copyFrom; }
    inline bool CopyFromHasBeenSet() const { return m_copyFromHasBeenSet; }
    template<typename CopyFromT = Aws::String>
    void SetCopyFrom(CopyFromT&& value) { m_copyFromHasBeenSet = true; m_copyFrom = std::forward<CopyFromT>(value); }
    template<typename CopyFromT = Aws::String>
    InferenceProfileModelSource& WithCopyFrom(CopyFromT&& value) { SetCopyFrom(std::forward<CopyFromT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_copyFrom;
    bool m_copyFromHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
