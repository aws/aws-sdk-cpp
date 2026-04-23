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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/TargetType.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Identifier that contains details about the directory consumer account with
   * whom the directory is being unshared.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UnshareTarget">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API UnshareTarget
  {
  public:
    UnshareTarget();
    UnshareTarget(Aws::Utils::Json::JsonView jsonValue);
    UnshareTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the directory consumer account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Identifier of the directory consumer account.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Identifier of the directory consumer account.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Identifier of the directory consumer account.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Identifier of the directory consumer account.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Identifier of the directory consumer account.</p>
     */
    inline UnshareTarget& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Identifier of the directory consumer account.</p>
     */
    inline UnshareTarget& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory consumer account.</p>
     */
    inline UnshareTarget& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Type of identifier to be used in the <i>Id</i> field.</p>
     */
    inline const TargetType& GetType() const{ return m_type; }

    /**
     * <p>Type of identifier to be used in the <i>Id</i> field.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of identifier to be used in the <i>Id</i> field.</p>
     */
    inline void SetType(const TargetType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of identifier to be used in the <i>Id</i> field.</p>
     */
    inline void SetType(TargetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of identifier to be used in the <i>Id</i> field.</p>
     */
    inline UnshareTarget& WithType(const TargetType& value) { SetType(value); return *this;}

    /**
     * <p>Type of identifier to be used in the <i>Id</i> field.</p>
     */
    inline UnshareTarget& WithType(TargetType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    TargetType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
