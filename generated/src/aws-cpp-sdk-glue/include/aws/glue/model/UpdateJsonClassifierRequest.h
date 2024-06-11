/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a JSON classifier to be updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateJsonClassifierRequest">AWS
   * API Reference</a></p>
   */
  class UpdateJsonClassifierRequest
  {
  public:
    AWS_GLUE_API UpdateJsonClassifierRequest();
    AWS_GLUE_API UpdateJsonClassifierRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UpdateJsonClassifierRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateJsonClassifierRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateJsonClassifierRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateJsonClassifierRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>JsonPath</code> string defining the JSON data for the classifier to
     * classify. Glue supports a subset of JsonPath, as described in <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/custom-classifier.html#custom-classifier-json">Writing
     * JsonPath Custom Classifiers</a>.</p>
     */
    inline const Aws::String& GetJsonPath() const{ return m_jsonPath; }
    inline bool JsonPathHasBeenSet() const { return m_jsonPathHasBeenSet; }
    inline void SetJsonPath(const Aws::String& value) { m_jsonPathHasBeenSet = true; m_jsonPath = value; }
    inline void SetJsonPath(Aws::String&& value) { m_jsonPathHasBeenSet = true; m_jsonPath = std::move(value); }
    inline void SetJsonPath(const char* value) { m_jsonPathHasBeenSet = true; m_jsonPath.assign(value); }
    inline UpdateJsonClassifierRequest& WithJsonPath(const Aws::String& value) { SetJsonPath(value); return *this;}
    inline UpdateJsonClassifierRequest& WithJsonPath(Aws::String&& value) { SetJsonPath(std::move(value)); return *this;}
    inline UpdateJsonClassifierRequest& WithJsonPath(const char* value) { SetJsonPath(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_jsonPath;
    bool m_jsonPathHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
