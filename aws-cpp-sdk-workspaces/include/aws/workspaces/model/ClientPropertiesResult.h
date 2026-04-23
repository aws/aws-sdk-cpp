/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/ClientProperties.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Information about the Amazon WorkSpaces client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ClientPropertiesResult">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API ClientPropertiesResult
  {
  public:
    ClientPropertiesResult();
    ClientPropertiesResult(Aws::Utils::Json::JsonView jsonValue);
    ClientPropertiesResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource identifier, in the form of a directory ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource identifier, in the form of a directory ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource identifier, in the form of a directory ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource identifier, in the form of a directory ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource identifier, in the form of a directory ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource identifier, in the form of a directory ID.</p>
     */
    inline ClientPropertiesResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource identifier, in the form of a directory ID.</p>
     */
    inline ClientPropertiesResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource identifier, in the form of a directory ID.</p>
     */
    inline ClientPropertiesResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline const ClientProperties& GetClientProperties() const{ return m_clientProperties; }

    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline bool ClientPropertiesHasBeenSet() const { return m_clientPropertiesHasBeenSet; }

    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline void SetClientProperties(const ClientProperties& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties = value; }

    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline void SetClientProperties(ClientProperties&& value) { m_clientPropertiesHasBeenSet = true; m_clientProperties = std::move(value); }

    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline ClientPropertiesResult& WithClientProperties(const ClientProperties& value) { SetClientProperties(value); return *this;}

    /**
     * <p>Information about the Amazon WorkSpaces client.</p>
     */
    inline ClientPropertiesResult& WithClientProperties(ClientProperties&& value) { SetClientProperties(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    ClientProperties m_clientProperties;
    bool m_clientPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
