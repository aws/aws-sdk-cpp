/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
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
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>A summary of the objective that a common control supports.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/AssociatedObjectiveSummary">AWS
   * API Reference</a></p>
   */
  class AssociatedObjectiveSummary
  {
  public:
    AWS_CONTROLCATALOG_API AssociatedObjectiveSummary();
    AWS_CONTROLCATALOG_API AssociatedObjectiveSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API AssociatedObjectiveSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the related objective.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AssociatedObjectiveSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AssociatedObjectiveSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AssociatedObjectiveSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the related objective.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssociatedObjectiveSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssociatedObjectiveSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssociatedObjectiveSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
