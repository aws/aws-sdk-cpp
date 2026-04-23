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

#include <aws/polly/model/VoiceId.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace VoiceIdMapper
      {

        static const int Geraint_HASH = HashingUtils::HashString("Geraint");
        static const int Gwyneth_HASH = HashingUtils::HashString("Gwyneth");
        static const int Mads_HASH = HashingUtils::HashString("Mads");
        static const int Naja_HASH = HashingUtils::HashString("Naja");
        static const int Hans_HASH = HashingUtils::HashString("Hans");
        static const int Marlene_HASH = HashingUtils::HashString("Marlene");
        static const int Nicole_HASH = HashingUtils::HashString("Nicole");
        static const int Russell_HASH = HashingUtils::HashString("Russell");
        static const int Amy_HASH = HashingUtils::HashString("Amy");
        static const int Brian_HASH = HashingUtils::HashString("Brian");
        static const int Emma_HASH = HashingUtils::HashString("Emma");
        static const int Raveena_HASH = HashingUtils::HashString("Raveena");
        static const int Ivy_HASH = HashingUtils::HashString("Ivy");
        static const int Joanna_HASH = HashingUtils::HashString("Joanna");
        static const int Joey_HASH = HashingUtils::HashString("Joey");
        static const int Justin_HASH = HashingUtils::HashString("Justin");
        static const int Kendra_HASH = HashingUtils::HashString("Kendra");
        static const int Kimberly_HASH = HashingUtils::HashString("Kimberly");
        static const int Matthew_HASH = HashingUtils::HashString("Matthew");
        static const int Salli_HASH = HashingUtils::HashString("Salli");
        static const int Conchita_HASH = HashingUtils::HashString("Conchita");
        static const int Enrique_HASH = HashingUtils::HashString("Enrique");
        static const int Miguel_HASH = HashingUtils::HashString("Miguel");
        static const int Penelope_HASH = HashingUtils::HashString("Penelope");
        static const int Chantal_HASH = HashingUtils::HashString("Chantal");
        static const int Celine_HASH = HashingUtils::HashString("Celine");
        static const int Lea_HASH = HashingUtils::HashString("Lea");
        static const int Mathieu_HASH = HashingUtils::HashString("Mathieu");
        static const int Dora_HASH = HashingUtils::HashString("Dora");
        static const int Karl_HASH = HashingUtils::HashString("Karl");
        static const int Carla_HASH = HashingUtils::HashString("Carla");
        static const int Giorgio_HASH = HashingUtils::HashString("Giorgio");
        static const int Mizuki_HASH = HashingUtils::HashString("Mizuki");
        static const int Liv_HASH = HashingUtils::HashString("Liv");
        static const int Lotte_HASH = HashingUtils::HashString("Lotte");
        static const int Ruben_HASH = HashingUtils::HashString("Ruben");
        static const int Ewa_HASH = HashingUtils::HashString("Ewa");
        static const int Jacek_HASH = HashingUtils::HashString("Jacek");
        static const int Jan_HASH = HashingUtils::HashString("Jan");
        static const int Maja_HASH = HashingUtils::HashString("Maja");
        static const int Ricardo_HASH = HashingUtils::HashString("Ricardo");
        static const int Vitoria_HASH = HashingUtils::HashString("Vitoria");
        static const int Cristiano_HASH = HashingUtils::HashString("Cristiano");
        static const int Ines_HASH = HashingUtils::HashString("Ines");
        static const int Carmen_HASH = HashingUtils::HashString("Carmen");
        static const int Maxim_HASH = HashingUtils::HashString("Maxim");
        static const int Tatyana_HASH = HashingUtils::HashString("Tatyana");
        static const int Astrid_HASH = HashingUtils::HashString("Astrid");
        static const int Filiz_HASH = HashingUtils::HashString("Filiz");
        static const int Vicki_HASH = HashingUtils::HashString("Vicki");
        static const int Takumi_HASH = HashingUtils::HashString("Takumi");
        static const int Seoyeon_HASH = HashingUtils::HashString("Seoyeon");
        static const int Aditi_HASH = HashingUtils::HashString("Aditi");
        static const int Zhiyu_HASH = HashingUtils::HashString("Zhiyu");
        static const int Bianca_HASH = HashingUtils::HashString("Bianca");
        static const int Lucia_HASH = HashingUtils::HashString("Lucia");
        static const int Mia_HASH = HashingUtils::HashString("Mia");


        VoiceId GetVoiceIdForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Geraint_HASH)
          {
            return VoiceId::Geraint;
          }
          else if (hashCode == Gwyneth_HASH)
          {
            return VoiceId::Gwyneth;
          }
          else if (hashCode == Mads_HASH)
          {
            return VoiceId::Mads;
          }
          else if (hashCode == Naja_HASH)
          {
            return VoiceId::Naja;
          }
          else if (hashCode == Hans_HASH)
          {
            return VoiceId::Hans;
          }
          else if (hashCode == Marlene_HASH)
          {
            return VoiceId::Marlene;
          }
          else if (hashCode == Nicole_HASH)
          {
            return VoiceId::Nicole;
          }
          else if (hashCode == Russell_HASH)
          {
            return VoiceId::Russell;
          }
          else if (hashCode == Amy_HASH)
          {
            return VoiceId::Amy;
          }
          else if (hashCode == Brian_HASH)
          {
            return VoiceId::Brian;
          }
          else if (hashCode == Emma_HASH)
          {
            return VoiceId::Emma;
          }
          else if (hashCode == Raveena_HASH)
          {
            return VoiceId::Raveena;
          }
          else if (hashCode == Ivy_HASH)
          {
            return VoiceId::Ivy;
          }
          else if (hashCode == Joanna_HASH)
          {
            return VoiceId::Joanna;
          }
          else if (hashCode == Joey_HASH)
          {
            return VoiceId::Joey;
          }
          else if (hashCode == Justin_HASH)
          {
            return VoiceId::Justin;
          }
          else if (hashCode == Kendra_HASH)
          {
            return VoiceId::Kendra;
          }
          else if (hashCode == Kimberly_HASH)
          {
            return VoiceId::Kimberly;
          }
          else if (hashCode == Matthew_HASH)
          {
            return VoiceId::Matthew;
          }
          else if (hashCode == Salli_HASH)
          {
            return VoiceId::Salli;
          }
          else if (hashCode == Conchita_HASH)
          {
            return VoiceId::Conchita;
          }
          else if (hashCode == Enrique_HASH)
          {
            return VoiceId::Enrique;
          }
          else if (hashCode == Miguel_HASH)
          {
            return VoiceId::Miguel;
          }
          else if (hashCode == Penelope_HASH)
          {
            return VoiceId::Penelope;
          }
          else if (hashCode == Chantal_HASH)
          {
            return VoiceId::Chantal;
          }
          else if (hashCode == Celine_HASH)
          {
            return VoiceId::Celine;
          }
          else if (hashCode == Lea_HASH)
          {
            return VoiceId::Lea;
          }
          else if (hashCode == Mathieu_HASH)
          {
            return VoiceId::Mathieu;
          }
          else if (hashCode == Dora_HASH)
          {
            return VoiceId::Dora;
          }
          else if (hashCode == Karl_HASH)
          {
            return VoiceId::Karl;
          }
          else if (hashCode == Carla_HASH)
          {
            return VoiceId::Carla;
          }
          else if (hashCode == Giorgio_HASH)
          {
            return VoiceId::Giorgio;
          }
          else if (hashCode == Mizuki_HASH)
          {
            return VoiceId::Mizuki;
          }
          else if (hashCode == Liv_HASH)
          {
            return VoiceId::Liv;
          }
          else if (hashCode == Lotte_HASH)
          {
            return VoiceId::Lotte;
          }
          else if (hashCode == Ruben_HASH)
          {
            return VoiceId::Ruben;
          }
          else if (hashCode == Ewa_HASH)
          {
            return VoiceId::Ewa;
          }
          else if (hashCode == Jacek_HASH)
          {
            return VoiceId::Jacek;
          }
          else if (hashCode == Jan_HASH)
          {
            return VoiceId::Jan;
          }
          else if (hashCode == Maja_HASH)
          {
            return VoiceId::Maja;
          }
          else if (hashCode == Ricardo_HASH)
          {
            return VoiceId::Ricardo;
          }
          else if (hashCode == Vitoria_HASH)
          {
            return VoiceId::Vitoria;
          }
          else if (hashCode == Cristiano_HASH)
          {
            return VoiceId::Cristiano;
          }
          else if (hashCode == Ines_HASH)
          {
            return VoiceId::Ines;
          }
          else if (hashCode == Carmen_HASH)
          {
            return VoiceId::Carmen;
          }
          else if (hashCode == Maxim_HASH)
          {
            return VoiceId::Maxim;
          }
          else if (hashCode == Tatyana_HASH)
          {
            return VoiceId::Tatyana;
          }
          else if (hashCode == Astrid_HASH)
          {
            return VoiceId::Astrid;
          }
          else if (hashCode == Filiz_HASH)
          {
            return VoiceId::Filiz;
          }
          else if (hashCode == Vicki_HASH)
          {
            return VoiceId::Vicki;
          }
          else if (hashCode == Takumi_HASH)
          {
            return VoiceId::Takumi;
          }
          else if (hashCode == Seoyeon_HASH)
          {
            return VoiceId::Seoyeon;
          }
          else if (hashCode == Aditi_HASH)
          {
            return VoiceId::Aditi;
          }
          else if (hashCode == Zhiyu_HASH)
          {
            return VoiceId::Zhiyu;
          }
          else if (hashCode == Bianca_HASH)
          {
            return VoiceId::Bianca;
          }
          else if (hashCode == Lucia_HASH)
          {
            return VoiceId::Lucia;
          }
          else if (hashCode == Mia_HASH)
          {
            return VoiceId::Mia;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceId>(hashCode);
          }

          return VoiceId::NOT_SET;
        }

        Aws::String GetNameForVoiceId(VoiceId enumValue)
        {
          switch(enumValue)
          {
          case VoiceId::Geraint:
            return "Geraint";
          case VoiceId::Gwyneth:
            return "Gwyneth";
          case VoiceId::Mads:
            return "Mads";
          case VoiceId::Naja:
            return "Naja";
          case VoiceId::Hans:
            return "Hans";
          case VoiceId::Marlene:
            return "Marlene";
          case VoiceId::Nicole:
            return "Nicole";
          case VoiceId::Russell:
            return "Russell";
          case VoiceId::Amy:
            return "Amy";
          case VoiceId::Brian:
            return "Brian";
          case VoiceId::Emma:
            return "Emma";
          case VoiceId::Raveena:
            return "Raveena";
          case VoiceId::Ivy:
            return "Ivy";
          case VoiceId::Joanna:
            return "Joanna";
          case VoiceId::Joey:
            return "Joey";
          case VoiceId::Justin:
            return "Justin";
          case VoiceId::Kendra:
            return "Kendra";
          case VoiceId::Kimberly:
            return "Kimberly";
          case VoiceId::Matthew:
            return "Matthew";
          case VoiceId::Salli:
            return "Salli";
          case VoiceId::Conchita:
            return "Conchita";
          case VoiceId::Enrique:
            return "Enrique";
          case VoiceId::Miguel:
            return "Miguel";
          case VoiceId::Penelope:
            return "Penelope";
          case VoiceId::Chantal:
            return "Chantal";
          case VoiceId::Celine:
            return "Celine";
          case VoiceId::Lea:
            return "Lea";
          case VoiceId::Mathieu:
            return "Mathieu";
          case VoiceId::Dora:
            return "Dora";
          case VoiceId::Karl:
            return "Karl";
          case VoiceId::Carla:
            return "Carla";
          case VoiceId::Giorgio:
            return "Giorgio";
          case VoiceId::Mizuki:
            return "Mizuki";
          case VoiceId::Liv:
            return "Liv";
          case VoiceId::Lotte:
            return "Lotte";
          case VoiceId::Ruben:
            return "Ruben";
          case VoiceId::Ewa:
            return "Ewa";
          case VoiceId::Jacek:
            return "Jacek";
          case VoiceId::Jan:
            return "Jan";
          case VoiceId::Maja:
            return "Maja";
          case VoiceId::Ricardo:
            return "Ricardo";
          case VoiceId::Vitoria:
            return "Vitoria";
          case VoiceId::Cristiano:
            return "Cristiano";
          case VoiceId::Ines:
            return "Ines";
          case VoiceId::Carmen:
            return "Carmen";
          case VoiceId::Maxim:
            return "Maxim";
          case VoiceId::Tatyana:
            return "Tatyana";
          case VoiceId::Astrid:
            return "Astrid";
          case VoiceId::Filiz:
            return "Filiz";
          case VoiceId::Vicki:
            return "Vicki";
          case VoiceId::Takumi:
            return "Takumi";
          case VoiceId::Seoyeon:
            return "Seoyeon";
          case VoiceId::Aditi:
            return "Aditi";
          case VoiceId::Zhiyu:
            return "Zhiyu";
          case VoiceId::Bianca:
            return "Bianca";
          case VoiceId::Lucia:
            return "Lucia";
          case VoiceId::Mia:
            return "Mia";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceIdMapper
    } // namespace Model
  } // namespace Polly
} // namespace Aws
