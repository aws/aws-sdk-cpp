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
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MemberType.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The name of the attribute, which is one of the values defined in the
   * UserAttribute enumeration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/Delegate">AWS
   * API Reference</a></p>
   */
  class AWS_WORKMAIL_API Delegate
  {
  public:
    Delegate();
    Delegate(Aws::Utils::Json::JsonView jsonValue);
    Delegate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline Delegate& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline Delegate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the user or group associated as the resource's
     * delegate.</p>
     */
    inline Delegate& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline const MemberType& GetType() const{ return m_type; }

    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline void SetType(const MemberType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline void SetType(MemberType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline Delegate& WithType(const MemberType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the delegate: user or group.</p>
     */
    inline Delegate& WithType(MemberType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    MemberType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
