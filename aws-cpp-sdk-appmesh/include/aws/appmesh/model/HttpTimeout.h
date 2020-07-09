/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  /**
   * <p>An object that represents types of timeouts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/HttpTimeout">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API HttpTimeout
  {
  public:
    HttpTimeout();
    HttpTimeout(Aws::Utils::Json::JsonView jsonValue);
    HttpTimeout& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Duration& GetIdle() const{ return m_idle; }

    
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }

    
    inline void SetIdle(const Duration& value) { m_idleHasBeenSet = true; m_idle = value; }

    
    inline void SetIdle(Duration&& value) { m_idleHasBeenSet = true; m_idle = std::move(value); }

    
    inline HttpTimeout& WithIdle(const Duration& value) { SetIdle(value); return *this;}

    
    inline HttpTimeout& WithIdle(Duration&& value) { SetIdle(std::move(value)); return *this;}


    
    inline const Duration& GetPerRequest() const{ return m_perRequest; }

    
    inline bool PerRequestHasBeenSet() const { return m_perRequestHasBeenSet; }

    
    inline void SetPerRequest(const Duration& value) { m_perRequestHasBeenSet = true; m_perRequest = value; }

    
    inline void SetPerRequest(Duration&& value) { m_perRequestHasBeenSet = true; m_perRequest = std::move(value); }

    
    inline HttpTimeout& WithPerRequest(const Duration& value) { SetPerRequest(value); return *this;}

    
    inline HttpTimeout& WithPerRequest(Duration&& value) { SetPerRequest(std::move(value)); return *this;}

  private:

    Duration m_idle;
    bool m_idleHasBeenSet;

    Duration m_perRequest;
    bool m_perRequestHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
