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
    AWS_APPMESH_API LoggingFormat();
    AWS_APPMESH_API LoggingFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API LoggingFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::Vector<JsonFormatRef>& GetJson() const{ return m_json; }

    /**
     * <p/>
     */
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetJson(const Aws::Vector<JsonFormatRef>& value) { m_jsonHasBeenSet = true; m_json = value; }

    /**
     * <p/>
     */
    inline void SetJson(Aws::Vector<JsonFormatRef>&& value) { m_jsonHasBeenSet = true; m_json = std::move(value); }

    /**
     * <p/>
     */
    inline LoggingFormat& WithJson(const Aws::Vector<JsonFormatRef>& value) { SetJson(value); return *this;}

    /**
     * <p/>
     */
    inline LoggingFormat& WithJson(Aws::Vector<JsonFormatRef>&& value) { SetJson(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline LoggingFormat& AddJson(const JsonFormatRef& value) { m_jsonHasBeenSet = true; m_json.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline LoggingFormat& AddJson(JsonFormatRef&& value) { m_jsonHasBeenSet = true; m_json.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p/>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p/>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p/>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p/>
     */
    inline LoggingFormat& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p/>
     */
    inline LoggingFormat& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline LoggingFormat& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::Vector<JsonFormatRef> m_json;
    bool m_jsonHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
