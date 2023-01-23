/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/MigrationAlertType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides information about alerts and warnings that Amazon Lex sends during a
   * migration. The alerts include information about how to resolve the
   * issue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/MigrationAlert">AWS
   * API Reference</a></p>
   */
  class MigrationAlert
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API MigrationAlert();
    AWS_LEXMODELBUILDINGSERVICE_API MigrationAlert(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API MigrationAlert& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of alert. There are two kinds of alerts:</p> <ul> <li> <p>
     * <code>ERROR</code> - There was an issue with the migration that can't be
     * resolved. The migration stops.</p> </li> <li> <p> <code>WARN</code> - There was
     * an issue with the migration that requires manual changes to the new Amazon Lex
     * V2 bot. The migration continues.</p> </li> </ul>
     */
    inline const MigrationAlertType& GetType() const{ return m_type; }

    /**
     * <p>The type of alert. There are two kinds of alerts:</p> <ul> <li> <p>
     * <code>ERROR</code> - There was an issue with the migration that can't be
     * resolved. The migration stops.</p> </li> <li> <p> <code>WARN</code> - There was
     * an issue with the migration that requires manual changes to the new Amazon Lex
     * V2 bot. The migration continues.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of alert. There are two kinds of alerts:</p> <ul> <li> <p>
     * <code>ERROR</code> - There was an issue with the migration that can't be
     * resolved. The migration stops.</p> </li> <li> <p> <code>WARN</code> - There was
     * an issue with the migration that requires manual changes to the new Amazon Lex
     * V2 bot. The migration continues.</p> </li> </ul>
     */
    inline void SetType(const MigrationAlertType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of alert. There are two kinds of alerts:</p> <ul> <li> <p>
     * <code>ERROR</code> - There was an issue with the migration that can't be
     * resolved. The migration stops.</p> </li> <li> <p> <code>WARN</code> - There was
     * an issue with the migration that requires manual changes to the new Amazon Lex
     * V2 bot. The migration continues.</p> </li> </ul>
     */
    inline void SetType(MigrationAlertType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of alert. There are two kinds of alerts:</p> <ul> <li> <p>
     * <code>ERROR</code> - There was an issue with the migration that can't be
     * resolved. The migration stops.</p> </li> <li> <p> <code>WARN</code> - There was
     * an issue with the migration that requires manual changes to the new Amazon Lex
     * V2 bot. The migration continues.</p> </li> </ul>
     */
    inline MigrationAlert& WithType(const MigrationAlertType& value) { SetType(value); return *this;}

    /**
     * <p>The type of alert. There are two kinds of alerts:</p> <ul> <li> <p>
     * <code>ERROR</code> - There was an issue with the migration that can't be
     * resolved. The migration stops.</p> </li> <li> <p> <code>WARN</code> - There was
     * an issue with the migration that requires manual changes to the new Amazon Lex
     * V2 bot. The migration continues.</p> </li> </ul>
     */
    inline MigrationAlert& WithType(MigrationAlertType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A message that describes why the alert was issued.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message that describes why the alert was issued.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message that describes why the alert was issued.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message that describes why the alert was issued.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message that describes why the alert was issued.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message that describes why the alert was issued.</p>
     */
    inline MigrationAlert& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message that describes why the alert was issued.</p>
     */
    inline MigrationAlert& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message that describes why the alert was issued.</p>
     */
    inline MigrationAlert& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Additional details about the alert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDetails() const{ return m_details; }

    /**
     * <p>Additional details about the alert.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Additional details about the alert.</p>
     */
    inline void SetDetails(const Aws::Vector<Aws::String>& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Additional details about the alert.</p>
     */
    inline void SetDetails(Aws::Vector<Aws::String>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Additional details about the alert.</p>
     */
    inline MigrationAlert& WithDetails(const Aws::Vector<Aws::String>& value) { SetDetails(value); return *this;}

    /**
     * <p>Additional details about the alert.</p>
     */
    inline MigrationAlert& WithDetails(Aws::Vector<Aws::String>&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>Additional details about the alert.</p>
     */
    inline MigrationAlert& AddDetails(const Aws::String& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }

    /**
     * <p>Additional details about the alert.</p>
     */
    inline MigrationAlert& AddDetails(Aws::String&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }

    /**
     * <p>Additional details about the alert.</p>
     */
    inline MigrationAlert& AddDetails(const char* value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }


    /**
     * <p>A link to the Amazon Lex documentation that describes how to resolve the
     * alert.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReferenceURLs() const{ return m_referenceURLs; }

    /**
     * <p>A link to the Amazon Lex documentation that describes how to resolve the
     * alert.</p>
     */
    inline bool ReferenceURLsHasBeenSet() const { return m_referenceURLsHasBeenSet; }

    /**
     * <p>A link to the Amazon Lex documentation that describes how to resolve the
     * alert.</p>
     */
    inline void SetReferenceURLs(const Aws::Vector<Aws::String>& value) { m_referenceURLsHasBeenSet = true; m_referenceURLs = value; }

    /**
     * <p>A link to the Amazon Lex documentation that describes how to resolve the
     * alert.</p>
     */
    inline void SetReferenceURLs(Aws::Vector<Aws::String>&& value) { m_referenceURLsHasBeenSet = true; m_referenceURLs = std::move(value); }

    /**
     * <p>A link to the Amazon Lex documentation that describes how to resolve the
     * alert.</p>
     */
    inline MigrationAlert& WithReferenceURLs(const Aws::Vector<Aws::String>& value) { SetReferenceURLs(value); return *this;}

    /**
     * <p>A link to the Amazon Lex documentation that describes how to resolve the
     * alert.</p>
     */
    inline MigrationAlert& WithReferenceURLs(Aws::Vector<Aws::String>&& value) { SetReferenceURLs(std::move(value)); return *this;}

    /**
     * <p>A link to the Amazon Lex documentation that describes how to resolve the
     * alert.</p>
     */
    inline MigrationAlert& AddReferenceURLs(const Aws::String& value) { m_referenceURLsHasBeenSet = true; m_referenceURLs.push_back(value); return *this; }

    /**
     * <p>A link to the Amazon Lex documentation that describes how to resolve the
     * alert.</p>
     */
    inline MigrationAlert& AddReferenceURLs(Aws::String&& value) { m_referenceURLsHasBeenSet = true; m_referenceURLs.push_back(std::move(value)); return *this; }

    /**
     * <p>A link to the Amazon Lex documentation that describes how to resolve the
     * alert.</p>
     */
    inline MigrationAlert& AddReferenceURLs(const char* value) { m_referenceURLsHasBeenSet = true; m_referenceURLs.push_back(value); return *this; }

  private:

    MigrationAlertType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Aws::String> m_details;
    bool m_detailsHasBeenSet = false;

    Aws::Vector<Aws::String> m_referenceURLs;
    bool m_referenceURLsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
