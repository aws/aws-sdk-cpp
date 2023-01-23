/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/App.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Details of the Firewall Manager applications list.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/AppsListDataSummary">AWS
   * API Reference</a></p>
   */
  class AppsListDataSummary
  {
  public:
    AWS_FMS_API AppsListDataSummary();
    AWS_FMS_API AppsListDataSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API AppsListDataSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline const Aws::String& GetListArn() const{ return m_listArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline bool ListArnHasBeenSet() const { return m_listArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline void SetListArn(const Aws::String& value) { m_listArnHasBeenSet = true; m_listArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline void SetListArn(Aws::String&& value) { m_listArnHasBeenSet = true; m_listArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline void SetListArn(const char* value) { m_listArnHasBeenSet = true; m_listArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline AppsListDataSummary& WithListArn(const Aws::String& value) { SetListArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline AppsListDataSummary& WithListArn(Aws::String&& value) { SetListArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the applications list.</p>
     */
    inline AppsListDataSummary& WithListArn(const char* value) { SetListArn(value); return *this;}


    /**
     * <p>The ID of the applications list.</p>
     */
    inline const Aws::String& GetListId() const{ return m_listId; }

    /**
     * <p>The ID of the applications list.</p>
     */
    inline bool ListIdHasBeenSet() const { return m_listIdHasBeenSet; }

    /**
     * <p>The ID of the applications list.</p>
     */
    inline void SetListId(const Aws::String& value) { m_listIdHasBeenSet = true; m_listId = value; }

    /**
     * <p>The ID of the applications list.</p>
     */
    inline void SetListId(Aws::String&& value) { m_listIdHasBeenSet = true; m_listId = std::move(value); }

    /**
     * <p>The ID of the applications list.</p>
     */
    inline void SetListId(const char* value) { m_listIdHasBeenSet = true; m_listId.assign(value); }

    /**
     * <p>The ID of the applications list.</p>
     */
    inline AppsListDataSummary& WithListId(const Aws::String& value) { SetListId(value); return *this;}

    /**
     * <p>The ID of the applications list.</p>
     */
    inline AppsListDataSummary& WithListId(Aws::String&& value) { SetListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the applications list.</p>
     */
    inline AppsListDataSummary& WithListId(const char* value) { SetListId(value); return *this;}


    /**
     * <p>The name of the applications list.</p>
     */
    inline const Aws::String& GetListName() const{ return m_listName; }

    /**
     * <p>The name of the applications list.</p>
     */
    inline bool ListNameHasBeenSet() const { return m_listNameHasBeenSet; }

    /**
     * <p>The name of the applications list.</p>
     */
    inline void SetListName(const Aws::String& value) { m_listNameHasBeenSet = true; m_listName = value; }

    /**
     * <p>The name of the applications list.</p>
     */
    inline void SetListName(Aws::String&& value) { m_listNameHasBeenSet = true; m_listName = std::move(value); }

    /**
     * <p>The name of the applications list.</p>
     */
    inline void SetListName(const char* value) { m_listNameHasBeenSet = true; m_listName.assign(value); }

    /**
     * <p>The name of the applications list.</p>
     */
    inline AppsListDataSummary& WithListName(const Aws::String& value) { SetListName(value); return *this;}

    /**
     * <p>The name of the applications list.</p>
     */
    inline AppsListDataSummary& WithListName(Aws::String&& value) { SetListName(std::move(value)); return *this;}

    /**
     * <p>The name of the applications list.</p>
     */
    inline AppsListDataSummary& WithListName(const char* value) { SetListName(value); return *this;}


    /**
     * <p>An array of <code>App</code> objects in the Firewall Manager applications
     * list.</p>
     */
    inline const Aws::Vector<App>& GetAppsList() const{ return m_appsList; }

    /**
     * <p>An array of <code>App</code> objects in the Firewall Manager applications
     * list.</p>
     */
    inline bool AppsListHasBeenSet() const { return m_appsListHasBeenSet; }

    /**
     * <p>An array of <code>App</code> objects in the Firewall Manager applications
     * list.</p>
     */
    inline void SetAppsList(const Aws::Vector<App>& value) { m_appsListHasBeenSet = true; m_appsList = value; }

    /**
     * <p>An array of <code>App</code> objects in the Firewall Manager applications
     * list.</p>
     */
    inline void SetAppsList(Aws::Vector<App>&& value) { m_appsListHasBeenSet = true; m_appsList = std::move(value); }

    /**
     * <p>An array of <code>App</code> objects in the Firewall Manager applications
     * list.</p>
     */
    inline AppsListDataSummary& WithAppsList(const Aws::Vector<App>& value) { SetAppsList(value); return *this;}

    /**
     * <p>An array of <code>App</code> objects in the Firewall Manager applications
     * list.</p>
     */
    inline AppsListDataSummary& WithAppsList(Aws::Vector<App>&& value) { SetAppsList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>App</code> objects in the Firewall Manager applications
     * list.</p>
     */
    inline AppsListDataSummary& AddAppsList(const App& value) { m_appsListHasBeenSet = true; m_appsList.push_back(value); return *this; }

    /**
     * <p>An array of <code>App</code> objects in the Firewall Manager applications
     * list.</p>
     */
    inline AppsListDataSummary& AddAppsList(App&& value) { m_appsListHasBeenSet = true; m_appsList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_listArn;
    bool m_listArnHasBeenSet = false;

    Aws::String m_listId;
    bool m_listIdHasBeenSet = false;

    Aws::String m_listName;
    bool m_listNameHasBeenSet = false;

    Aws::Vector<App> m_appsList;
    bool m_appsListHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
