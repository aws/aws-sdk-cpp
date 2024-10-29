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
    AWS_BEDROCK_API InferenceProfileModelSource();
    AWS_BEDROCK_API InferenceProfileModelSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API InferenceProfileModelSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the model or system-defined inference profile that is the source
     * for the inference profile.</p>
     */
    inline const Aws::String& GetCopyFrom() const{ return m_copyFrom; }
    inline bool CopyFromHasBeenSet() const { return m_copyFromHasBeenSet; }
    inline void SetCopyFrom(const Aws::String& value) { m_copyFromHasBeenSet = true; m_copyFrom = value; }
    inline void SetCopyFrom(Aws::String&& value) { m_copyFromHasBeenSet = true; m_copyFrom = std::move(value); }
    inline void SetCopyFrom(const char* value) { m_copyFromHasBeenSet = true; m_copyFrom.assign(value); }
    inline InferenceProfileModelSource& WithCopyFrom(const Aws::String& value) { SetCopyFrom(value); return *this;}
    inline InferenceProfileModelSource& WithCopyFrom(Aws::String&& value) { SetCopyFrom(std::move(value)); return *this;}
    inline InferenceProfileModelSource& WithCopyFrom(const char* value) { SetCopyFrom(value); return *this;}
    ///@}
  private:

    Aws::String m_copyFrom;
    bool m_copyFromHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
