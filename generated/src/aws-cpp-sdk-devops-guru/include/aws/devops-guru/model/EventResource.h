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
   * <p> The Amazon Web Services resource that emitted an event. Amazon Web Services
   * resource events and metrics are analyzed by DevOps Guru to find anomalous
   * behavior and provide recommendations to improve your operational solutions.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/EventResource">AWS
   * API Reference</a></p>
   */
  class EventResource
  {
  public:
    AWS_DEVOPSGURU_API EventResource();
    AWS_DEVOPSGURU_API EventResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API EventResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of resource that emitted an event. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline EventResource& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline EventResource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline EventResource& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the resource that emitted an event. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EventResource& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EventResource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EventResource& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the resource that emitted an event. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EventResource& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EventResource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EventResource& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
