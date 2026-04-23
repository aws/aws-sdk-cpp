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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/KeyUsageName.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>The Key Usage X.509 v3 extension defines the purpose of the public key
   * contained in the certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/KeyUsage">AWS API
   * Reference</a></p>
   */
  class AWS_ACM_API KeyUsage
  {
  public:
    KeyUsage();
    KeyUsage(Aws::Utils::Json::JsonView jsonValue);
    KeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string value that contains a Key Usage extension name.</p>
     */
    inline const KeyUsageName& GetName() const{ return m_name; }

    /**
     * <p>A string value that contains a Key Usage extension name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A string value that contains a Key Usage extension name.</p>
     */
    inline void SetName(const KeyUsageName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A string value that contains a Key Usage extension name.</p>
     */
    inline void SetName(KeyUsageName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A string value that contains a Key Usage extension name.</p>
     */
    inline KeyUsage& WithName(const KeyUsageName& value) { SetName(value); return *this;}

    /**
     * <p>A string value that contains a Key Usage extension name.</p>
     */
    inline KeyUsage& WithName(KeyUsageName&& value) { SetName(std::move(value)); return *this;}

  private:

    KeyUsageName m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
