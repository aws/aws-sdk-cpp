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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MQ
{
namespace Model
{

  /**
   * A list of information about the configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ConfigurationId">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API ConfigurationId
  {
  public:
    ConfigurationId();
    ConfigurationId(const Aws::Utils::Json::JsonValue& jsonValue);
    ConfigurationId& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline ConfigurationId& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline ConfigurationId& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Required. The unique ID that Amazon MQ generates for the configuration.
     */
    inline ConfigurationId& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The Universally Unique Identifier (UUID) of the request.
     */
    inline int GetRevision() const{ return m_revision; }

    /**
     * The Universally Unique Identifier (UUID) of the request.
     */
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * The Universally Unique Identifier (UUID) of the request.
     */
    inline ConfigurationId& WithRevision(int value) { SetRevision(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    int m_revision;
    bool m_revisionHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
