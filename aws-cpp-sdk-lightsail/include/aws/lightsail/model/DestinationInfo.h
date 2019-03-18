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
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the destination of a record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DestinationInfo">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API DestinationInfo
  {
  public:
    DestinationInfo();
    DestinationInfo(Aws::Utils::Json::JsonView jsonValue);
    DestinationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the resource created at the destination.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource created at the destination.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource created at the destination.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource created at the destination.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource created at the destination.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource created at the destination.</p>
     */
    inline DestinationInfo& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource created at the destination.</p>
     */
    inline DestinationInfo& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource created at the destination.</p>
     */
    inline DestinationInfo& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The destination service of the record.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The destination service of the record.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The destination service of the record.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The destination service of the record.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The destination service of the record.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The destination service of the record.</p>
     */
    inline DestinationInfo& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The destination service of the record.</p>
     */
    inline DestinationInfo& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The destination service of the record.</p>
     */
    inline DestinationInfo& WithService(const char* value) { SetService(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_service;
    bool m_serviceHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
