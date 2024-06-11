/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>The Amazon Web Services resources in which DevOps Guru detected unusual
   * behavior that resulted in the generation of an anomaly. When DevOps Guru detects
   * multiple related anomalies, it creates and insight with details about the
   * anomalous behavior and suggestions about how to correct the
   * problem.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AnomalyResource">AWS
   * API Reference</a></p>
   */
  class AnomalyResource
  {
  public:
    AWS_DEVOPSGURU_API AnomalyResource();
    AWS_DEVOPSGURU_API AnomalyResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AnomalyResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AnomalyResource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AnomalyResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AnomalyResource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AnomalyResource& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AnomalyResource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AnomalyResource& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
