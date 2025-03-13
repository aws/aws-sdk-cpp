/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/JsonFormatRef.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the format for the logs.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/LoggingFormat">AWS
   * API Reference</a></p>
   */
  class LoggingFormat
  {
  public:
    AWS_APPMESH_API LoggingFormat() = default;
    AWS_APPMESH_API LoggingFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API LoggingFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<JsonFormatRef>& GetJson() const { return m_json; }
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
    template<typename JsonT = Aws::Vector<JsonFormatRef>>
    void SetJson(JsonT&& value) { m_jsonHasBeenSet = true; m_json = std::forward<JsonT>(value); }
    template<typename JsonT = Aws::Vector<JsonFormatRef>>
    LoggingFormat& WithJson(JsonT&& value) { SetJson(std::forward<JsonT>(value)); return *this;}
    template<typename JsonT = JsonFormatRef>
    LoggingFormat& AddJson(JsonT&& value) { m_jsonHasBeenSet = true; m_json.emplace_back(std::forward<JsonT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    LoggingFormat& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JsonFormatRef> m_json;
    bool m_jsonHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
