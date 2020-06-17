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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/Duration.h>
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

  class AWS_APPMESH_API TcpTimeout
  {
  public:
    TcpTimeout();
    TcpTimeout(Aws::Utils::Json::JsonView jsonValue);
    TcpTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Duration& GetIdle() const{ return m_idle; }

    
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }

    
    inline void SetIdle(const Duration& value) { m_idleHasBeenSet = true; m_idle = value; }

    
    inline void SetIdle(Duration&& value) { m_idleHasBeenSet = true; m_idle = std::move(value); }

    
    inline TcpTimeout& WithIdle(const Duration& value) { SetIdle(value); return *this;}

    
    inline TcpTimeout& WithIdle(Duration&& value) { SetIdle(std::move(value)); return *this;}

  private:

    Duration m_idle;
    bool m_idleHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
