﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when using Zendesk as a flow source.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ZendeskSourceProperties">AWS
   * API Reference</a></p>
   */
  class ZendeskSourceProperties
  {
  public:
    AWS_APPFLOW_API ZendeskSourceProperties();
    AWS_APPFLOW_API ZendeskSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ZendeskSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The object specified in the Zendesk flow source. </p>
     */
    inline const Aws::String& GetObject() const{ return m_object; }
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
    inline void SetObject(const Aws::String& value) { m_objectHasBeenSet = true; m_object = value; }
    inline void SetObject(Aws::String&& value) { m_objectHasBeenSet = true; m_object = std::move(value); }
    inline void SetObject(const char* value) { m_objectHasBeenSet = true; m_object.assign(value); }
    inline ZendeskSourceProperties& WithObject(const Aws::String& value) { SetObject(value); return *this;}
    inline ZendeskSourceProperties& WithObject(Aws::String&& value) { SetObject(std::move(value)); return *this;}
    inline ZendeskSourceProperties& WithObject(const char* value) { SetObject(value); return *this;}
    ///@}
  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
