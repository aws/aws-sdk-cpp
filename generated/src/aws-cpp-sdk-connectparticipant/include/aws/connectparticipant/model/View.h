/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectparticipant/model/ViewContent.h>
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
namespace ConnectParticipant
{
namespace Model
{

  /**
   * <p>A view resource object. Contains metadata and content necessary to render the
   * view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/View">AWS
   * API Reference</a></p>
   */
  class View
  {
  public:
    AWS_CONNECTPARTICIPANT_API View();
    AWS_CONNECTPARTICIPANT_API View(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API View& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the view.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the view.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the view.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the view.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the view.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the view.</p>
     */
    inline View& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the view.</p>
     */
    inline View& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the view.</p>
     */
    inline View& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the view.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the view.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the view.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the view.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the view.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the view.</p>
     */
    inline View& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the view.</p>
     */
    inline View& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the view.</p>
     */
    inline View& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the view.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the view.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the view.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the view.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the view.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the view.</p>
     */
    inline View& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the view.</p>
     */
    inline View& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the view.</p>
     */
    inline View& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current version of the view.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The current version of the view.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The current version of the view.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The current version of the view.</p>
     */
    inline View& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p>
     */
    inline const ViewContent& GetContent() const{ return m_content; }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p>
     */
    inline void SetContent(const ViewContent& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p>
     */
    inline void SetContent(ViewContent&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p>
     */
    inline View& WithContent(const ViewContent& value) { SetContent(value); return *this;}

    /**
     * <p>View content containing all content necessary to render a view except for
     * runtime input data.</p>
     */
    inline View& WithContent(ViewContent&& value) { SetContent(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    ViewContent m_content;
    bool m_contentHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
