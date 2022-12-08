/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ArtifactSourceIdType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The ID and ID type of an artifact source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ArtifactSourceType">AWS
   * API Reference</a></p>
   */
  class ArtifactSourceType
  {
  public:
    AWS_SAGEMAKER_API ArtifactSourceType();
    AWS_SAGEMAKER_API ArtifactSourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ArtifactSourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of ID.</p>
     */
    inline const ArtifactSourceIdType& GetSourceIdType() const{ return m_sourceIdType; }

    /**
     * <p>The type of ID.</p>
     */
    inline bool SourceIdTypeHasBeenSet() const { return m_sourceIdTypeHasBeenSet; }

    /**
     * <p>The type of ID.</p>
     */
    inline void SetSourceIdType(const ArtifactSourceIdType& value) { m_sourceIdTypeHasBeenSet = true; m_sourceIdType = value; }

    /**
     * <p>The type of ID.</p>
     */
    inline void SetSourceIdType(ArtifactSourceIdType&& value) { m_sourceIdTypeHasBeenSet = true; m_sourceIdType = std::move(value); }

    /**
     * <p>The type of ID.</p>
     */
    inline ArtifactSourceType& WithSourceIdType(const ArtifactSourceIdType& value) { SetSourceIdType(value); return *this;}

    /**
     * <p>The type of ID.</p>
     */
    inline ArtifactSourceType& WithSourceIdType(ArtifactSourceIdType&& value) { SetSourceIdType(std::move(value)); return *this;}


    /**
     * <p>The ID.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The ID.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The ID.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The ID.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The ID.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The ID.</p>
     */
    inline ArtifactSourceType& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The ID.</p>
     */
    inline ArtifactSourceType& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The ID.</p>
     */
    inline ArtifactSourceType& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    ArtifactSourceIdType m_sourceIdType;
    bool m_sourceIdTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
