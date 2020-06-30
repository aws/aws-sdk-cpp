/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ClientException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

ClientException::ClientException() : 
    m_clusterNameHasBeenSet(false),
    m_nodegroupNameHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ClientException::ClientException(JsonView jsonValue) : 
    m_clusterNameHasBeenSet(false),
    m_nodegroupNameHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ClientException& ClientException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodegroupName"))
  {
    m_nodegroupName = jsonValue.GetString("nodegroupName");

    m_nodegroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientException::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_nodegroupNameHasBeenSet)
  {
   payload.WithString("nodegroupName", m_nodegroupName);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
