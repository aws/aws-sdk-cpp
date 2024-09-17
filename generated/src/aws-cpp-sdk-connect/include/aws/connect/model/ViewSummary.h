/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ViewType.h>
#include <aws/connect/model/ViewStatus.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A summary of a view's metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ViewSummary">AWS
   * API Reference</a></p>
   */
  class ViewSummary
  {
  public:
    AWS_CONNECT_API ViewSummary();
    AWS_CONNECT_API ViewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ViewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the view.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ViewSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ViewSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ViewSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the view.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ViewSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ViewSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ViewSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the view.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ViewSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ViewSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ViewSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the view.</p>
     */
    inline const ViewType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ViewType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ViewType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ViewSummary& WithType(const ViewType& value) { SetType(value); return *this;}
    inline ViewSummary& WithType(ViewType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the view status as either <code>SAVED</code> or
     * <code>PUBLISHED</code>. The <code>PUBLISHED</code> status will initiate
     * validation on the content.</p>
     */
    inline const ViewStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ViewStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ViewStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ViewSummary& WithStatus(const ViewStatus& value) { SetStatus(value); return *this;}
    inline ViewSummary& WithStatus(ViewStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the view.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ViewSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ViewSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ViewSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ViewType m_type;
    bool m_typeHasBeenSet = false;

    ViewStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
